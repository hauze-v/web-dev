# CSS Selectors #

## What is a selector? ##
A CSS selector is the first part of a CSS Rule. It is a pattern of elements and other terms that tell the browser which HTML elements should be selected have the CSS property values inside the rule applied to them. The element or elements which are selected by the selector are referred to as the *subject of the selector*.

In CSS, selectors are defined in the CSS Selectors specification; like any other part of CSS they need to have suporot in browsers for them to work. The majority of selectors that you will come across are defined in the "Level 3 Selectors" specification, which is a mature specification, therefore you will find excellent browser support for these selectors.

## Selector Lists ##
If you have more than one thing which uses the same CSS, then the individual selectors can be combined into a *selector list* so that the rule is applied to all of the individual selectors.

For example, if we have the same CSS for an h1 and also a class of .special, I could write this as two separate rules.

However, I could also combine these into a selector list, by adding a comma between them. White space is valid before and after a comma so you might find the selectors more readable if each is on a new line.

When you group selectors in this way, if any selector is invalid the whole rule will be ignored.