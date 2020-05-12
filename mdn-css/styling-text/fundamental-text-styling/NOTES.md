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
CSS provides four common properties to alter the visual weight/emphasis of text: 

* `font-style`: Used to turn italic text on and off.
* `font-weight`: Sets how bold the text is
* `text-transform`: Allows you to set your font to be transformed. Values include:
  * `none`: prevents any transformation
  * `uppercase`
  * `lowercase`
  * `capitalize`
  * `full-width`: Transforms all glyphs to be w r i t t e n i n s i d e a f i x e d - w i d t h, similar to monospace font, allowing alligning of e.g. Latin characters along with Asian language glyphs.
* `text-decoration`: Sets/unsets text decoration on fonts (you'll mainly use this to unset the default underline on links when styling them). Available values are:
  * `none`
  * `underline`
  * `overline`
  * `line-through`

You should note that `text-docoration` can accept multiple values at once, if you want to add multiple decorations simultaneously.

--- TEXT DROP SHADOWS ---
You can apply drop shadows to your text using the `text-shadow` property. This takes up to four values (properties) as described below:

  1. The horizontal offset of the shadow from the original text - commonly used with `px`; positive values move the shadow right, and negative values left. (required value)

  2. The vertical offset which behaves basically the same way as horizontal. (required value)

  3. The blur radius - a higher value means the shadow is dispersed more widely. If this value is not included it defaults to 0 which means no blur. 

  4. The base color of the shadow, which can take any CSS color unit, if not included it defaults to black

You can apply multiple shadows to the same text by including multiple shadow values separated by commas, for example:

text-shadow: 1px 1px 1px red,
             2px 2px 1px red;


## Text layout ##

--- TEXT ALIGNMENT ---
The `text-align` property is used to control how text is aligned within its containing content box. The available values are as follows, and work in pretty much the same way as they do in a regular word processor application:
  * `left`: left-justifies the text
  * `right`: right-justifies the text
  * `center`: centers the text
  * `justify`: Makes the text spread out, varying the gaps in between the words so that all lines of text are the same width. You need to use this carefully - it can look terrible, especially when applied to a paragraph with lots of long words in it.

--- LINE HEIGHT ---
The `line-height` property sets the height of each line of text - this can take most length and size units, but can also take a unitless value, which acts as a multiplier and is generally considered the best option - the `font-size` is multiplied to get the `line-height`. Body text generally looks nicer and is easier to read when the lines are spaced apart; the recommended line height is around 1.5 - 2 (double spaced). So to set our lines of text to 1.6 times the height of the font, you'd use this:

`line-height: 1.6;`

--- LETTER AND WORD SPACING ---
The `letter-spacing` and `word-spacing` properties allow you to set the spacing between letters and words in your text. You won't use these very often, but might find a use for them to get a certain look, or to improve the legibility of a particularly dense font.

--- OTHER PROPERTIES WORTH LOOKING AT ---
Once you become used to using the above, you should also explore the following: 

Font styles:
  * `font-variant` - switch between small caps and normal font alternatives
  * `font-kerning` - switch font kerning options on and off
  * `font-feature-settings` - switch various OpenType font features on and off
  * `font-variant-alternates` - control the use of alternate glyphs for a given font-face
  * `font-variant-caps` - control the use of alternate capital glyphs
  * `font-variant-east-asign` - control the usuage of alternate glyphs for East Asian scripts, like Japanese and Chinese.
  * `font-variant-ligatures` - control which ligatures and contextual forms are used in text

Text layout styles: 
  * `text-indent` - specify how much horizontal space should be left before the begining of the first line of the text content
  * `text-overflow` - define how overflowed content that is not displayed is signaled to users
  * `white-space` - define how whitespace and associated line breaks inside the element are handled
  * `word-break` - specify whether to break lines within words
  * `hyphens` - switch on and off hyphenation for supported languages


## Font shorthand ##