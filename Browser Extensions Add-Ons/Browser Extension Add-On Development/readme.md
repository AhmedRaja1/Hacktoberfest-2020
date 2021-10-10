# Extension hands-on

<br />
<br />


## Step 1. Create a folder [ and remember where it is 👮 ]

<br />

## Step 2. Create a manifest file inside the folder ( manifest.json)

```json
{
	"name": "<name for extension>",
	"version": "1.0",
	"description": "<description>",
	"manifest_version": 2
}
```

<br />

## Step 3. Add extension to browser ( both chrome and edge )

- open `edge://extensions/` in your browsers
- DEVELOPER MODE has to be enabled to be able to upload the extension
![Turn on Developer mode](https://docs.microsoft.com/en-us/microsoft-edge/extensions-chromium/getting-started/media/part1-developermode-toggle.png)
- Load the extension into the browser by clicking **Load Unpacked** button then selecting the folder that you just created
- see the extension next to address bar and pin it.

<br />

## Step 4. Create popup page

```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>
<body>
  <div>
    <input id="text" type="number">
    <button id="btn">submit</button>
  </div>
</body>
</html>
```

<br />

## Step 5. Add popup page in manifest

```json
"browser_action": {
	"default_popup": "popup.html"
}
```


<br />

## Step 6. Copy paste this CSS

```css
*{
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  width: 300px;
  height: 300px;
  display: flex;
  align-items: center;
  justify-content: center;
}

div * {
  padding: 11px;
  font-size: 1.2em;
  max-width: 100px;
}

button {
  cursor: pointer;
}
```

<br />

## Step 7. Copy this javascript and debug the popup script

- do some simple JS to show where to debug

```js
document.getElementById('btn').addEventListener('click', () => {
	chrome.runtime.sendMessage({interval:document.getElementById('text').value}, function(response) {
		console.log(response, 'popup');
	});
})
```

- link to send message documentation to understand what it does
- add `popup.js` link in html

<br />

## Step 8. Background script

- dummy script to debug background


<br />

## Step 9. Add background script to manifest

```json
"background": {
    "scripts": ["background.js"],
    "persistent": true
  }
```

- explain `persistent` keyword

<br />

## Step 10. Add message listeners in background

```js
let id = null;
chrome.runtime.onMessage.addListener(
  function(msg, sender, sendResponse) {
    console.log(msg, 'bg');

    
    let interval = +msg.interval;
    if (isNaN(interval)) interval = 10000;
    else interval *= 1000;
    
    clearInterval(id);

    id = setInterval(() => msgContentScript(msg), interval);

    sendResponse('from bg')
    
  }
);

function msgContentScript(msg) {
  chrome.tabs.query({active: true, currentWindow: true}, function(tabs) {
    chrome.tabs.sendMessage(tabs[0].id, {interval: msg.interval});
  });
}
```

- explain in parts when by first adding listener and then adding message passing to content
- link to documentation
- if tabs doesn't work you might need permission to access


<br />

## Step 11. Add a content script

- dummy content script and **debug** it
- refresh extension to update css changes

<br />


## Step 12. Add content script in manifest

```json
"content_scripts": [
    {
      "matches": ["<all_urls>"],
      "js": ["content.js"],
      "css": ["content.css"]
    }
  ]
```

<br />

## Step 13. Add message listener to content script

```js
let id = null;
console.log('hi content');
chrome.runtime.onMessage.addListener(
  function(msg) {
    addDiv();

  }
);

function addDiv() {
  const div = document.createElement('div');
  div.classList.add('overlayFromExtension');
  div.innerText = "Look away from your screen!!";
  document.body.appendChild(div);

  setTimeout(() => div.remove(), 2000);
}

```

- add new tab to see it works there as well.

<br />


## Step 14. Add CSS as well for content script

```css
.overlayFromExtension{
  color: #ccc;
  text-transform: capitalize;
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  background-color: rgba(0,0,0,.8);
  display: flex;
  align-items: center;
  justify-content: center;
  font-size: 3em;
  z-index: 9999;
}
```
<br />


## Step 16. Disable extension in the end to avoid inject content script everywhere.

<br />

## Demo installing and running in edge

- chrome://extensions/


<br />

## ideas for extensions

<br />

## permissions intro

<br />
