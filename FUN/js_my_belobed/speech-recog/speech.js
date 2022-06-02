// get dom elements
var textBox = document.querySelector("textarea");
var startBtn = document.querySelector("#start-btn");
var stopBtn = document.querySelector("#stop-btn");

// declare required variables

// stores the transcript speech recognized
var content = "";

// boolean flag
var speechRecognitionIsOn = false;

// instance of speech recognition and its properties
var speechRecognition = window.webkitSpeechRecognition;

// creates an instance of speechRecognition
var recognition = new speechRecognition();

// capture single result each time
recognition.continuous = false;

//

/*
speech recognition properties
- onstart
- onend
- onerror
- onresult
*/

// add event listeners to start and stop buttons
startBtn.addEventListener("click", () => {
  speechRecognitionIsOn = true;
  console.log("voice recognition started!");

  recognition.start();
});

stopBtn.addEventListener("click", () => {
  speechRecognitionIsOn = false;
  console.log("voice recognition stopped!");
  textBox.value = "";

  recognition.stop();
});

// event handlers
recognition.onstart = () => {
  // clear content
  if (content.length) {
    content = "";
  }
};

recognition.onend = () => {
  if (speechRecognitionIsOn) {
    recognition.start();
  }
};

recognition.onerror = (event) => {
  // failed to recognize speech
  console.log("speech recognition error detected: " + event.error);
};

recognition.onresult = (event) => {
  let current = event.resultIndex;
  let transcript = event.results[current][0].transcript;
  content += transcript;
  textBox.value = content;
  console.log(transcript);
};
