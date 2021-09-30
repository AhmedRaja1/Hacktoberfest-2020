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
