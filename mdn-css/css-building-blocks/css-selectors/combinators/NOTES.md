# Combinators #
These final selectors combine other selectors in a way that gives them a useful relationship to each other and the location of content in the document.

## Descendant selector ##
Selectors with spaces in between them

These selectors select elements that are descendants of other selectors. They do not need to be direct children to match

## Child combinator ##
The child combinator is a greater-than symbol, which matches only when the selectors select elements that are direct children. That means descendants further down the hierarchy don't match.

In our html example, we have an ordered list, nested inside is another unordered list. We'll use the child combinator to select only the <li> elements which are a direct child of a <ul>, and give them a top border.

If you remove the `>` that designates this as a child combinator, you end up with a descendant selector and then all <li> elements will get a red border.