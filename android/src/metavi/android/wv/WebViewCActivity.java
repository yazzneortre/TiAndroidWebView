package metavi.android.wv;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Window;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import org.appcelerator.titanium.util.TiRHelper;
import org.appcelerator.titanium.util.TiRHelper.ResourceNotFoundException;

public class WebViewCActivity extends Activity {
	String ExternalURL = null;
	WebView WV;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		this.getWindow().requestFeature(Window.FEATURE_PROGRESS);
		try {
			setContentView(TiRHelper.getResource("layout.wvactivity"));
			WV = (WebView) findViewById(TiRHelper.getResource("id.webview"));
		} catch (ResourceNotFoundException e) {
			Log.e("[NatwebviewModule]:", "XML resources could not be found!!!");
		}

		

		Bundle extras = getIntent().getExtras();
		if (extras != null) {
			ExternalURL = getIntent().getStringExtra("UrlVideo");
		}

		WV.getSettings().setJavaScriptEnabled(true);
		WV.setWebChromeClient(new WebChromeClient() {
			@Override
			public void onProgressChanged(WebView view, int newProgress) {
				// TODO Auto-generated method stub
				// super.onProgressChanged(view, newProgress);

			}
		});

		WV.setWebViewClient(new WebViewClient() {
			@Override
			public void onReceivedError(WebView view, int errorCode,
					String description, String failingUrl) {
				// TODO Auto-generated method stub
			}

			@Override
			public boolean shouldOverrideUrlLoading(WebView view, String url) {
				// TODO Auto-generated method stub
				view.loadUrl(url);
				return true;
			}
		});
		

		WV.loadUrl(ExternalURL);

	}
	
	@Override
	public void onBackPressed() {
		WV.loadUrl("");
		// TODO Auto-generated method stub
		super.onBackPressed();
		this.finish();
	}
}
