# Type, Class, and ID Selectors #

## Type Selectors ##
A **type selector** is sometimes referred to as a *tag name selector* or *element selector*, because it selects an HTML tagelement in your document. In the example below we have used the span, em, and strong selectors. All instances of <span>, <em>, and <strong> elements are therefore styled accordingly.

## The Universal Selector ##
The universal selector is indicated by an asterisk (*) and selects everything in the document (or inside the parent element if it is being chained together with another element and a descendant combinator).

Using the universal selector to whipe out default styling can sometimes be seen in "reset stylesheets," which strip out all of the browser styling. Since the universal selector makes global changes, we use it to deal with very specific situations such as the one outline below:

--- USING THE UNIVERSAL SELECTOR TO MAKE YOUR SELECTORS EASIER TO READ ---
One use of the univseral selector is to make selectors easier to read and more obvious in terms of what they're doing. For example, if I wanted to select the first child of any <article> element, no matter what element it was, and make it bold, I could use the `:first-child` selector as a descendant selector along with the <article> element selector:

article :first-child {

}

This could be confused however with `article:first-child`, which will select any <article> element that is the first child of another element.

To avoid this confusion we can add the universal selector to the `:first-child` selector, so it's obvious what the selector is doing. It's selecting *any* element which is the first-child of an <article> element.

article *:first-child {

}