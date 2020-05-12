# Getting Started with CSS #
In this article we'll take a simple HTML document and apply CSS to it, learning some practical things about the language along the way.

## Adding CSS to our document ##
First thing's first: tell the HTML document that you have some CSS rules you want to use.

There are three different ways to apply CSS to an HTML document that you'll commonly come across, however, for now, we will look at the most common and useful way of doing so - linking CSS from the head of your document.

## Styling HTML elements ##
By making our heading red we have already demonstrated that we can target and style an HTML element. We do this by targeting an `element selector` - this is a selctor that directly matches an HTML element name. 

Note that you can target multiple selectors at once, by separating the selectors with a comma. 

## Chaning the default behavior of elements ## 
All browsers have their own default stylesheets that give us a baseline to work with so that the text isn't all clumped up and on one line. Most browsers have similar default stylesheets. 

Often we'll want to alter this default style and one common adjustment is to remove the bullet-points from an <li> elements.

## Adding a class ##
So far we have styled elements based on their HTML element names. This works as long as you want all the elements of that type in your document to look the same. Most of the time that isn't the case and so you will need to find a way to select a subset of elements without changing the others. The most common way to do this is to add a class to your HTML element and target that class.

Sometimes you'll see rules with a selector that lists the HTML element selector along with the class:

`li.special {
  color: orange;
}`

This syntax means "target any li element that has a class of special" If you were to do this, then you'd not longer be able to place the class special on elements other than <li>s to get the intended styles.

It's better practice to not specify the element and simply go with the class unless you know for sure you only want to target certain elements.

## Styling things based on their location in a document ##
There are times when you will want something to look different based on where it is in the document. There are a number of selectors that can help you here, but for now we'll look at just a couple.

In our example doc there are two <em> elements - one inside a paragraph and the other inside a list item.
  To select only an <em> that is nested inside an <li> element I can use a selector called the `descendant combinator`, which simply takes the form of a space between two other selectors

`li em {
  color: rebeccapurple;
}`

This selector will select any <em> element that is inside `(a descendant of)` an <li>.

Another type of selector based on element location is the `adjacent sibling combinator`
  The adjacent sibling combinator would select something like a paragraph when it comes directly after a heading at the same hierarchy level in the HTML.
  To use it, place a `+` between the selector elements.

## Styling things base on state ##
A great way to explain styling by state is to take a look at styling links.
  When we style a link we need to target the <a> element. This has different states depending on whether it is unvisited, visited, being hovered over, focused via the keyboard, or in the process of being clicked (activated).
  We can use CSS to target these different states 

## Combining selectors and combinators ##
It is worth noting that you can combine multiple selectors and combinators together. 

You can combine multiple types together. 

