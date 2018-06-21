/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
 if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
    [
            /* Block Styles */
            { name : 'Paragraph'        , element : 'p' },
            { name : 'Heading 1'        , element : 'h1' },
            { name : 'Heading 2'        , element : 'h2' },
            { name : 'Heading 3'        , element : 'h3' },

            {
                    name : 'Event: Sponsor',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'event-sponsors'
                    }
            },
            {
                    name : 'Event: Detail',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'event-detail'
                    }
            },
            {
                    name : 'Two Third: Text',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'two-third-text'
                    }
            },
            {
                    name : 'One Third: Image',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'one-third-image'
                    }
            },
                        {
                    name : 'Full: Text',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'full-text'
                    }
            },
                        {
                    name : 'Half: Text',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'half-text'
                    }
            },
            {
                    name : 'Accordion',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'accordion'
                    }
            },
            {
                    name : 'html: Block',
                    element : 'div',
                    attributes :
                    {
                            'class' : 'html-block'
                    }
            }


    ]);
}