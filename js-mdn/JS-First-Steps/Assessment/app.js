const customName = document.getElementById('customname');
const randomize = document.querySelector('.randomize');
const story = document.querySelector('.story');

function randomValueFromArray(array) {
  const random = Math.floor(Math.random() * array.length);
  return array[random];
}


/* STORY VARIABLES */
let protagonist = ["Willy the Goblin", "Big Daddy", "Father Christmas"];
let loc = ["the soup kitchen", "Disneyworld", "the White House"];
let crisis = ["spontaneously combusted", "melted into a puddle on the sidewalk", "turned into a slug and crawled away"];


/* 3. EVENT LISTENER AND FUNCTION DEFINITION */

randomize.addEventListener('click', result);

function result() {
  let name = "Bob"

  if (customName.value !== '') {
    name = customName.value;
  }

  if (document.getElementById("uk").checked) {
    let weight = Math.round(300);
    let temperature = Math.round(94);

  }

  let storyText = `It was 94 fahrenheit outside, so ${randomValueFromArray(protagonist)} went for a walk. When they got to ${randomValueFromArray(location)}, they stared in horror for a few moments, then ${randomValueFromArray(crisis)}. ${name} saw the whole thing, but was not surprised - ${randomValueFromArray(protagonist)} weighs 300 pounds, and it was a hot day.`

  story.textContent = storyText;
  story.style.visibility = 'visible';
}