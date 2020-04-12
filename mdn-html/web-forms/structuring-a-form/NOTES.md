# How to Structure a Web Form #
The flexibility of forms makes them one of the most complex structures in HTML; you can build any kind of basic form using dedicated elements and attributes. 

Using correct strucuture when building an HTML form will help ensure that the form is both usable and accessible

## The Form Element ## 
The <form> element formally defines a form and attributes that determine the form's behavior. Each time you want to create an HTML form, you must start it by uisng this element, nesting all the contents inside. 

Many assistive technologies and browser plugins can discover <form> elements and implement special hooks to make them easier to use. 

!WARNING: It's strictly forbidden to nest a form inside another form as it causes forms to behave in an unpreditable manner. 

## The <fieldset> and <legend> elements ##
The <fieldset> element is a convenient way to create groups of widgets that share the same purpose, for styling and semantic purposes.

You can label a <fieldset> by including a <legend> element just below the opening <fieldset> tag. The content of that <legend> element formally describes the purpose of the <fieldset> it is included inside. 

Because of its influence over assistive technology, the <fieldset> element is one of the key elements for building accessible forms; however it's important not to abuse it. If possible, each time you build a form, try to listen to how a screen reader interprets it. If it sounds odd, try to improve the form structure. 

## The <label> element ##
The <label> element is the formal way to define a label for an HTML form control (widget). This is the most important element if you want to build acessible forms - when implemented properly, screenreaders will speak a form element's label along with any related instructions. 

You can associate a <label> with a form control by using the label's `for` attribute and providing the value of the form control's `id` attribute.

Alternatively, you may nest the form control within the <label>, implicitly associating it. Even in these cases, however, it's best practice to always use the `for` attribute to give screenreaders the information they need. 

Labels are clickable, too!
  Another advantage of properly setting up labels is that you can click or tap the label to activate the corresponding widget. This is useful for controls like text inputs, where you can click the label as well as the input to focus your cursor inside it. 
  It's especially useful for radio buttons and checkboxes - the hit area of such a control can be very small, so it's useful to make it as easy to activate as possible.

