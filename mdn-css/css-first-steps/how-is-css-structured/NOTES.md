# How is CSS structured #

## Applying CSS to your HTML ##
There are three methods of applying CSS to a document

--- EXTERNAL STYLESHEET ---
  Most common and useful method of attaching CSS to a document as you can link the CSS to multiple pages, allowing you to style them all with the same stylesheet.

--- INTERNAL STYLESHEET ---
  Where you don't have an external sheet linked, but instead place your CSS inside a <style> element contained inside the HTML <head>
  This can be useful in some circumstances (maybe you're working with a content management system where you can't modify the CSS files directly), but it isn't quite as efficient as external stylesheets - in a website, the CSS would need to be repeated across every page, and updated in multiple places if changes were required.

--- INLINE STYLES ---
  Inline styles are CSS declarations that affect one element only, contained within a `style` attribute
  Please don't do this unless you really have to! It's really bad for maintenance, and it also mixes your presentational CSS information with your HTML structural information, making the code harder to read and understand.

There are a few places where inline styles are more common, even advisable, however. You might have to resort to using them i fyour working environment is really restrictive (perhaps your CMS only allows you to edit the HTML body).
  You'll also see them used a lot in HTML email in order to get compatibility with as many email clients as possible.

## Selectors ##
You can't talk about CSS without mentioning selectors, and we have already discovered several different types in the getting started with css tutorial

A selector is how we target something in our HTML document in order to apply styles to it. If your styles are not aplying then it is likely that your selector does not match the thing that you think it should match.

--- SPECIFICITY ---
When two rules apply to one element, which one wins? 

The CSS language has rules to control which rule will win in the event of a collision - these are called `cascade` and `specificity.` 
  Cascade says that - if a declaration appears later in the stylesheet, it shall override earlier ones.
  However, if you have something like a element selector and a class selector, the class will win, even if it appears earlier in the stylersheet. This is due to the fact that the class declaration is described as being more specific, or having more specificity than the element selector, so it wins.

Identifying that more than one rule could apply to an element is the first step in fixing such issues.

## Properties and values ##
AT its most basic level, CSS consists of two building blocks:
  `properties` - human-readable identifieers that indicate which stylistic features (e.g. font-size, width, background-color) you want to change.
  `values` - each specified property is given a value, which indicates how you want to change those stylistic features

  A propery paired with a value is called a `CSS declaration.` These declarations are put within `CSS declaration blocks` (between cury braces)

  Finally, `CSS declaration blocks` are paired with `selectors` to produce `CSS Rulesets` or `CSS Rules`. 

  It's important to remember that both properties and values are case-sensitive in CSS and they're both separated by a colon (:).

--- FUNCTIONS ---
While most values are relatively simple keywords or numeric values, there are some possible values which take the form of a function.
  An example would be the `calc()` function. This function allows you to do simple math from within your CSS, for example: 

.box {
  width: calc(40%-20%)
}

Another example of common CSS functions would be the various values for `transform` property: 
  such as `rotate()`:

.box {
  transform: rotate(0.8turn)
}