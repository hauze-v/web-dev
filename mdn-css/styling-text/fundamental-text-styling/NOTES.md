# Fundamental Text and Font Styling #

## What is involved in styling text in CSS? ##
As you'll have already experienced in your work with HTML and CSS, text inside an element is laid out inside the element's content box. It starts at the top left of the content box, and flows towards the end of the line. Text content effectively behaves like a series of inline elements, being laid out on lines adjacent to one another, and not creating line breaks until the end of the line is reached, or unless you force a line break manually using the <br> element.

The CSS properties used to style text generally fall into two categories, which we'll look at separately in this article: 
  * **Font-styles**: Properties that affect the font that is applied to the text, affecting what font is applied, how bit it is, whether it's bold, italic, etc.
  * **Text layout styles**: Properties that affect the spacing and other layout features of the text, allowing manipulation of, for example, the space between lines and letters, and how the text is aligned within the content box.

  **Note**: Bear in mind that the text inside an element is all affected as one single entity. You can't select and style subsections of text unless you wrap them in an appropriate element (such as a <span> or <strong>), or use a text-specific pseudo-element like ::first-letter, ::first-line, or ::selection (selects the text currently highlighted by the cursor).

  ## Fonts ##
  