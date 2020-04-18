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