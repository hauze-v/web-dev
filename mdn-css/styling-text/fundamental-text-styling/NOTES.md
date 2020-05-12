# Fundamental Text and Font Styling #

## What is involved in styling text in CSS? ##
As you'll have already experienced in your work with HTML and CSS, text inside an element is laid out inside the element's content box. It starts at the top left of the content box, and flows towards the end of the line. Text content effectively behaves like a series of inline elements, being laid out on lines adjacent to one another, and not creating line breaks until the end of the line is reached, or unless you force a line break manually using the <br> element.

The CSS properties used to style text generally fall into two categories, which we'll look at separately in this article: 
  * **Font-styles**: Properties that affect the font that is applied to the text, affecting what font is applied, how bit it is, whether it's bold, italic, etc.
  * **Text layout styles**: Properties that affect the spacing and other layout features of the text, allowing manipulation of, for example, the space between lines and letters, and how the text is aligned within the content box.

  **Note**: Bear in mind that the text inside an element is all affected as one single entity. You can't select and style subsections of text unless you wrap them in an appropriate element (such as a <span> or <strong>), or use a text-specific pseudo-element like ::first-letter, ::first-line, or ::selection (selects the text currently highlighted by the cursor).

  ## Fonts ##

  --- COLOR ---
  The `color` property sets the color of the foreground content of the selected elements (which is usually the text, but can also include a couple of other things, such as an underline or overline placed on text using the `text-decoration` property).


  --- FONT FAMILIES ---
  To set a different font on your text, you use the `font-familiy` property - this allows you to specify a font (or list of fonts) for the browser to apply to the selected elements. The browser will only apply a font if it is available on the machine the website is being accessed on; if not, it will use a browser default font. 

  There are only a certain number of fonts that are generally available across all systems and can therefore be used without much worry. These are the so-called **web safe fonts**.

  Most of the time, as web developers we want to have more specific control over theh fonts used to display our text content. The problem is to find a way to know which font is available on the computer used to see our web pages. There is no way to know this in every case, but the web safe fonts are knwon to be available on nearly all instances of the most used operating systems.

  The list of actual web safe fonts will change as operating systems evolve, but here's the current list:

  Arial
  Courier New
  Georgia
  Times New Roman
  Trebuchet MS
  Verdana

  Among various resources, the cssfonstack.com website maintains a list of web safe fonts available on Windows and macOS operating systems

### Default fonts ###
CSS defines five generic names for fonts: `serif`, `sans-serif`, `monospace`, `cursive`, and `fantasy`. Those are very generic and the exact font face used when using those generic names is up to each browser and can vary for each operating system they are running on. It represents a *worst case scenario* where the browser will try to do its best to provide at least a font that looks appropriate. 

`serif`, `sans-serif`, and `monospace` are quite predictable and reasonable, but `fantasy` and `cursive` are less predictable and it's recommended to use them very carefully.

### Font stacks ###
Since you can't gurantee the availability of the fonts you want to use on your webpages, you can supply a **font stack** so that the browser has multiple fonts it can choose from. This simply involves a `font-family` value consisting of multiple font names separated by commas.

It's good practice to provide a suitable generic font name at the end of the stack so that if none of the listed fonts are available, the browser can at least provide something approximately suitable.

**Note**: Font names that have more than one word - like `Trebuchet MS` - need to be surround by quotes, for example `"Trebuchet MS"`.

--- FONT SIZE ---
The `font-size` of an element is inherited from that element's parent element. This all starts with the root element of the entire document - `<html>` - the `font-size` of which is set to 16px as standard across browsers.

<h1> elements have a default `font-size` of 2em.

Things become more tricky when you start altering the font size of nested elements. For example, if you uhad an <article> element in your page, and sets its `font-size` to 1.5em (computes to 24px), and then wanted the paragraph inside the <article> element to have a compued font size of 20px, what em value would you use?

20/24, or 08333333em. This math can be complicated, so you need to be careful and it's therefore recommended you use `rem` where you can, to keep things simple, and avoid setting the `font-size` of container elements where possible.

### A simple sizing example ###
When sizing your text, it's usually a good idea to set the base `font-size` of the document to 10px, so that then the math is a lot easier to work out - `rem` values are then the pixel font size divided by 10, not 16. It's a good idea to list all of your `font-size` rulesets in a designated area in your stylesheet, so they are easy to find.

--- FONT STYLE, FONT WEIGHT, TEXT TRANSFORM, AND TEXT DECORATION ---

