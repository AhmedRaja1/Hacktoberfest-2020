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
