# Combinators #
These final selectors combine other selectors in a way that gives them a useful relationship to each other and the location of content in the document.

## Descendant selector ##
Selectors with spaces in between them

These selectors select elements that are descendants of other selectors. They do not need to be direct children to match

## Child combinator ##
The child combinator is a greater-than symbol, which matches only when the selectors select elements that are direct children. That means descendants further down the hierarchy don't match.

In our html example, we have an ordered list, nested inside is another unordered list. We'll use the child combinator to select only the <li> elements which are a direct child of a <ul>, and give them a top border.

If you remove the `>` that designates this as a child combinator, you end up with a descendant selector and then all <li> elements will get a red border.

## Adjacent sibling ##
The adjacent sibling selector (`+`) is used to select something if it is right next to another element at the same level of the hierarchy. For example, to select all <img> elements that come right after <p> elements:

`p + img {color: red;}`

A common use case is to do something with a paragraph that follows a heading, as in our html example. Here we are looking for a paragraph which is directly adjacent to an <h1>, and styling it.

If you insert some other element such as an <h2> in between the <h1> and the <p>, you will find that the paragraph is no longer matched by the selector and so does not get the background and foreground color applied when the element is adjacent.