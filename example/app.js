// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.

// open a single window

Titanium.UI.setBackgroundColor('#000');
var win = Titanium.UI.createWindow({
	title : 'Open Web View',
	backgroundColor : '#fff',
	exitOnClose : true
});
var natwebview = require("metavi.android.wv");

// Change to a valid URL
var contentURL = "https://developer.android.com/reference/android/webkit/WebView.html";

var openButton = Ti.UI.createButton({
	title : "Open WebView",
	top : "0dp",
	height : "40dp",
	left : "10dp",
	right : "10dp"
});

openButton.addEventListener('click', function() {
	natwebview.openWeb({
		url : contentURL
	});
});
win.add(openButton);
win.open();
