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
