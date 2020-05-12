# How CSS works #
In this lesson we'll take a look at how a browser takes CSS and HTML and turns that into a webpage.

## How does CSS actually work? ##
When a browser displays a document, it must combine the document's content with its style information. It processes the document in a number of stages, which we'll list below. 

1. The browser loads the HTML (e.g. receives it from the network).
2. It converts the HTML into DOM (Document Object Model). The DOM represents the document in the computer's memory. The DOM is explained in a bit more detail in the next section. 
3. The browser then fetches most of the resources that are linked to the HTML document, such as embedded images and videos ... and linked CSS! JavaScript is handled a bit later on in the process, and we won't talk about it here to keep things simpler.
4. The browser parses the fetched CSS, and sorts the different rules by their selector types into different buckets, e.g. element, class, ID, and so on. Based on the selectors it finds, it works out which rules should be applied to which nodes in the DOM, and attaches style to them as required (this intermediate step is called a render tree).
5. The render tree is laid out in the structure it should appear in after the rules have been applied to it.
6. The visual display of the page is shown on the screen (this stage is called painting).

## About the DOM ##
A DOM has a tree-like structure. Each element, attribute, and piece of text in the markup language becomes a DOM node in the tree structure. The nodes are defined by their relationship to other DOM nodes. Some elements are parents of child nodes, and child nodes have siblings. 

Understanding the DOM helps you design, debug, and maintain your CSS because the DOM is where you CSS and document's content meet up.

The DOM is where your HTML and CSS meet up.

When you start working with browser DevTools  you will be navigating the DOM as you select items in order to see which rules apply.

DevTools = the DOM battlefield

## Applying CSS to the DOM ##
The browser will parse the HTML and create a DOM from it, then parse the CSS. Since the only rule available in the CSS in this case, has a `span` selector, the browser will be able to sort the CSS very quickly! It will apply that rule to each one of the three <span>s, then apint the final visual representation to the screen.

So basically the flow is: 
Load the HTML --> Parse the HTML and create DOM --> Load embeds & CSS --> Parse the CSS and apply the the DOM (render the tree) --> Paint the image

## What happens if a browser encounters CSS it doesn't understand? ##
The answer is that it does nothing, and just moves on to the next bit of CSS!

If a browser is parsing your rules, and encounters a property or value that it doesn't understand, it ignores it and moves on to the next declaration. It will do this if you have made an error and misspelled a property or value, or it the property or value is just too new and the browser doesn't support it yet. 

Coupled with the way that the cascade effect works, and the fact that browsers will use the last CSS they come across in a stylesheet when you have two rules with the same specificity you can also offer alternatives for browsers that don't support new CSS.

