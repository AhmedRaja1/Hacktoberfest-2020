document.getElementById('btn').addEventListener('click', () => {
	chrome.runtime.sendMessage({interval:document.getElementById('text').value}, function(response) {
		console.log(response, 'popup');
	});
})
