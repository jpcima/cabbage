/*
  Copyright (C) 2016 Rory Walsh

  Cabbage is free software; you can redistribute it
  and/or modify it under the terms of the GNU General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  Cabbage is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU General Public
  License along with Csound; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
  02111-1307 USA
*/

#ifndef CABBAGEWIDGETDATAINITMETHODS_H_INCLUDED
#define CABBAGEWIDGETDATAINITMETHODS_H_INCLUDED

#include "../Utilities/CabbageUtilities.h"
#include "../CabbageIds.h"
#include "CabbageWidgetData.h"

//===========================================================================================
void CabbageWidgetData::setFormProperties(ValueTree widgetData, int ID)
{
    setProperty(widgetData, CabbageIdentifierIds::basetype, "layout");
    setProperty(widgetData, CabbageIdentifierIds::top, 10);
    setProperty(widgetData, CabbageIdentifierIds::left, 10);
    setProperty(widgetData, CabbageIdentifierIds::width, 600);
    setProperty(widgetData, CabbageIdentifierIds::height, 300);
    setProperty(widgetData, CabbageIdentifierIds::caption, "");
    setProperty(widgetData, CabbageIdentifierIds::name, "form");
    setProperty(widgetData, CabbageIdentifierIds::type, "form");
    setProperty(widgetData, CabbageIdentifierIds::guirefresh, 100);
    setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
    setProperty(widgetData, CabbageIdentifierIds::visible, 1);
    setProperty(widgetData, CabbageIdentifierIds::scrollbars, 1);
    setProperty(widgetData, CabbageIdentifierIds::titlebarcolour, "");
    setProperty(widgetData, CabbageIdentifierIds::fontcolour, "");
}

void CabbageWidgetData::setKeyboardProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 400);
	setProperty(widgetData, CabbageIdentifierIds::height, 100);
	setProperty(widgetData, CabbageIdentifierIds::value, 60);
	setProperty(widgetData, CabbageIdentifierIds::middlec, 3);
	setProperty(widgetData, CabbageIdentifierIds::type, "keyboard");
	setProperty(widgetData, CabbageIdentifierIds::name, "keyboard");
	setProperty(widgetData, CabbageIdentifierIds::kind, "horizontal");
	setProperty(widgetData, CabbageIdentifierIds::whitenotecolour, Colours::whitesmoke.toString());
	setProperty(widgetData, CabbageIdentifierIds::blacknotecolour, Colours::black.toString());
	setProperty(widgetData, CabbageIdentifierIds::noteseparatorcolour, Colour(0x66000000).toString());
	setProperty(widgetData, CabbageIdentifierIds::arrowbackgroundcolour, Colour(0xffd3d3d3).toString());
	setProperty(widgetData, CabbageIdentifierIds::arrowcolour, Colour(0xff000000).toString());
	
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::keywidth, 16);
	setProperty(widgetData, CabbageIdentifierIds::scrollbars, 1);
}

void CabbageWidgetData::setCsoundOutputProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, "basetype", "layout");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 400);
	setProperty(widgetData, CabbageIdentifierIds::text, "Csound output");
	setProperty(widgetData, CabbageIdentifierIds::height, 200);
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::black.toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, Colours::cornflowerblue.toString());
	setProperty(widgetData, CabbageIdentifierIds::name, "csoundoutput");
	setProperty(widgetData, CabbageIdentifierIds::wrap, 0);
	setProperty(widgetData, CabbageIdentifierIds::type, "csoundoutput");
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
}

void CabbageWidgetData::setTextBoxProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, "basetype", "layout");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 400);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::height, 200);
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::black.toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, Colours::white.toString());
	setProperty(widgetData, CabbageIdentifierIds::name, "textbox");
	setProperty(widgetData, CabbageIdentifierIds::type, "textbox");
	setProperty(widgetData, CabbageIdentifierIds::wrap, 0);
	setProperty(widgetData, CabbageIdentifierIds::file, "");
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
}

void CabbageWidgetData::setLabelProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, "basetype", "layout");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 80);
	setProperty(widgetData, CabbageIdentifierIds::height, 16);
	setProperty(widgetData, CabbageIdentifierIds::text, "hello");
	setProperty(widgetData, CabbageIdentifierIds::min, 1);
	setProperty(widgetData, CabbageIdentifierIds::name, "label");
	setProperty(widgetData, CabbageIdentifierIds::type, "label");
	setProperty(widgetData, CabbageIdentifierIds::type, getProperty(widgetData, "name").toString());
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::transparentBlack.toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::align, "centre");
	setProperty(widgetData, CabbageIdentifierIds::fontstyle, 1);
	setProperty(widgetData, CabbageIdentifierIds::channel, "");
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::corners, 3);
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);	
}

void CabbageWidgetData::setTextEditorProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, "basetype", "layout");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 100);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::height, 30);
	setProperty(widgetData, CabbageIdentifierIds::channel, "texteditor");
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::white.toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, Colours::black.toString());
	setProperty(widgetData, CabbageIdentifierIds::name, "texteditor");
	setProperty(widgetData, CabbageIdentifierIds::type, "texteditor");
	setProperty(widgetData, CabbageIdentifierIds::channeltype, "string");
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);	
}
	
void CabbageWidgetData::setEncoderProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, CabbageIdentifierIds::basetype, "interactive");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 60);
	setProperty(widgetData, CabbageIdentifierIds::height, 60);
	var channels;
	channels.append("encoder");
	setProperty(widgetData, CabbageIdentifierIds::channel, channels);
	setProperty(widgetData, CabbageIdentifierIds::value, 0);
	setProperty(widgetData, CabbageIdentifierIds::sliderincr, 1);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::textbox, 0.f);
	setProperty(widgetData, CabbageIdentifierIds::caption, "");
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::whitesmoke.toString());
	setProperty(widgetData, CabbageIdentifierIds::trackercolour, Colour(0, 118, 38).toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::textcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::outlinecolour, Colours::black.brighter(.3f).toString());
	setProperty(widgetData, CabbageIdentifierIds::midichan, -99);
	setProperty(widgetData, CabbageIdentifierIds::midictrl, -99);
	//these don't appear in the props dialog
	setProperty(widgetData, CabbageIdentifierIds::name, "encoder");
	setProperty(widgetData, CabbageIdentifierIds::type, getProperty(widgetData, "name").toString());
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::decimalplaces, 1);
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::trackerthickness, .05);
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::minenabled, 0);
	setProperty(widgetData, CabbageIdentifierIds::maxenabled, 0);	
}

void CabbageWidgetData::setGroupBoxProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, CabbageIdentifierIds::basetype, "layout");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 180);
	setProperty(widgetData, CabbageIdentifierIds::height, 122);
	setProperty(widgetData, CabbageIdentifierIds::corners, 5);
	setProperty(widgetData, CabbageIdentifierIds::colour, Colour(35, 35, 35).toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::outlinecolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::popup, 0);
	setProperty(widgetData, CabbageIdentifierIds::plant, "");
	setProperty(widgetData, CabbageIdentifierIds::child, 0);
	setProperty(widgetData, CabbageIdentifierIds::outlinethickness, 1);
	setProperty(widgetData, CabbageIdentifierIds::align, "centre");
	setProperty(widgetData, CabbageIdentifierIds::type, "groupbox");
	setProperty(widgetData, CabbageIdentifierIds::name, "groupbox");
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::imggroupbox, "");
}

void CabbageWidgetData::setHSliderProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, CabbageIdentifierIds::basetype, "interactive");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 150);
	setProperty(widgetData, CabbageIdentifierIds::height, 50);
	var channels;
	channels.append("hslider");
	setProperty(widgetData, CabbageIdentifierIds::channel, channels);
	setProperty(widgetData, CabbageIdentifierIds::min, 0);
	setProperty(widgetData, CabbageIdentifierIds::max, 1);
	setProperty(widgetData, CabbageIdentifierIds::value, 0);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::valuetextbox, 0.f);
	setProperty(widgetData, CabbageIdentifierIds::caption, "");
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::white.toString());
	setProperty(widgetData, CabbageIdentifierIds::trackercolour, Colour(0, 118, 38).toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::textcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::sliderskew, 1);
	setProperty(widgetData, CabbageIdentifierIds::sliderincr, .001);
	setProperty(widgetData, CabbageIdentifierIds::velocity, 0);

	setProperty(widgetData, CabbageIdentifierIds::midichan, -99);
	setProperty(widgetData, CabbageIdentifierIds::midictrl, -99);
	//these don't appear in the props dialog
	setProperty(widgetData, CabbageIdentifierIds::name, "hslider");
	setProperty(widgetData, CabbageIdentifierIds::type, getProperty(widgetData, "name").toString());
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::kind, "horizontal");
	setProperty(widgetData, CabbageIdentifierIds::decimalplaces, 1);
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::trackerthickness, .1);
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::gradient, 1);
	setProperty(widgetData, CabbageIdentifierIds::imgslider, "");
	setProperty(widgetData, CabbageIdentifierIds::imgsliderbg, "");
}
	
void CabbageWidgetData::setRSliderProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, CabbageIdentifierIds::basetype, "interactive");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 60);
	setProperty(widgetData, CabbageIdentifierIds::height, 60);
	var channels;
	channels.append("rslider");
	setProperty(widgetData, CabbageIdentifierIds::channel, channels);
	setProperty(widgetData, CabbageIdentifierIds::min, 0);
	setProperty(widgetData, CabbageIdentifierIds::max, 1);
	setProperty(widgetData, CabbageIdentifierIds::value, 0);
	setProperty(widgetData, CabbageIdentifierIds::sliderskew, 1);
	setProperty(widgetData, CabbageIdentifierIds::sliderincr, .001);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::valuetextbox, 0.f);
	setProperty(widgetData, CabbageIdentifierIds::caption, "");
	setProperty(widgetData, CabbageIdentifierIds::colour, Colours::whitesmoke.toString());
	setProperty(widgetData, CabbageIdentifierIds::trackercolour, Colour(0, 118, 38).toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::textcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::outlinecolour, Colours::black.brighter(.3f).toString());
	setProperty(widgetData, CabbageIdentifierIds::midichan, -99);
	setProperty(widgetData, CabbageIdentifierIds::midictrl, -99);
	setProperty(widgetData, CabbageIdentifierIds::name, "rslider");
	setProperty(widgetData, CabbageIdentifierIds::type, getProperty(widgetData, "name").toString());
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::kind, "rotary");
	setProperty(widgetData, CabbageIdentifierIds::decimalplaces, 1);
	setProperty(widgetData, CabbageIdentifierIds::velocity, 0);
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::trackerthickness, .7);
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::imgslider, "");
	setProperty(widgetData, CabbageIdentifierIds::imgsliderbg, "");
}	

void CabbageWidgetData::setVSliderProperties(ValueTree widgetData, int ID)
{
        setProperty(widgetData, CabbageIdentifierIds::basetype, "interactive");
        setProperty(widgetData, CabbageIdentifierIds::top, 10);
        setProperty(widgetData, CabbageIdentifierIds::left, 10);
        setProperty(widgetData, CabbageIdentifierIds::width, 50);
        setProperty(widgetData, CabbageIdentifierIds::height, 150);
        var channels;
        channels.append("vslider");
        setProperty(widgetData, CabbageIdentifierIds::channel, channels);
        setProperty(widgetData, CabbageIdentifierIds::min, 0);
        setProperty(widgetData, CabbageIdentifierIds::max, 1);
        setProperty(widgetData, CabbageIdentifierIds::value, 0);
        setProperty(widgetData, CabbageIdentifierIds::text, "");
        setProperty(widgetData, CabbageIdentifierIds::valuetextbox, 0.f);
        setProperty(widgetData, CabbageIdentifierIds::caption, "");
        setProperty(widgetData, CabbageIdentifierIds::colour, Colours::white.toString());
        setProperty(widgetData, CabbageIdentifierIds::trackercolour, Colour(0, 118, 38).toString());
        setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
        setProperty(widgetData, CabbageIdentifierIds::textcolour, CabbageUtilities::getComponentFontColour().toString());
        setProperty(widgetData, CabbageIdentifierIds::sliderskew, 1);
        setProperty(widgetData, CabbageIdentifierIds::sliderincr, .001);
        setProperty(widgetData, CabbageIdentifierIds::velocity, 0);
        setProperty(widgetData, CabbageIdentifierIds::midichan, -99);
        setProperty(widgetData, CabbageIdentifierIds::midictrl, -99);
        //these don't appear in the props dialog
        setProperty(widgetData, CabbageIdentifierIds::name, "vslider");
        setProperty(widgetData, CabbageIdentifierIds::type, getProperty(widgetData, "name").toString());
        setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
        setProperty(widgetData, CabbageIdentifierIds::kind, "vertical");

        setProperty(widgetData, CabbageIdentifierIds::decimalplaces, 1);
        setProperty(widgetData, CabbageIdentifierIds::trackerthickness, .1);
        setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
        setProperty(widgetData, CabbageIdentifierIds::visible, 1);
        setProperty(widgetData, CabbageIdentifierIds::imgslider, "");
        setProperty(widgetData, CabbageIdentifierIds::imgsliderbg, "");
}	

void CabbageWidgetData::setImageProperties(ValueTree widgetData, int ID)
{
    setProperty(widgetData, "basetype", "layout");
    setProperty(widgetData, CabbageIdentifierIds::top, 10);
    setProperty(widgetData, CabbageIdentifierIds::left, 10);
    setProperty(widgetData, CabbageIdentifierIds::width, 160);
    setProperty(widgetData, CabbageIdentifierIds::height, 120);
    setProperty(widgetData, CabbageIdentifierIds::shape, "square");
    setProperty(widgetData, CabbageIdentifierIds::corners, 0);
    setProperty(widgetData, CabbageIdentifierIds::colour, Colours::white.toString());
    setProperty(widgetData, CabbageIdentifierIds::outlinecolour, Colours::white.toString());
    setProperty(widgetData, CabbageIdentifierIds::outlinethickness, 0);
    setProperty(widgetData, CabbageIdentifierIds::popup, 0);
    setProperty(widgetData, CabbageIdentifierIds::plant, "");
    setProperty(widgetData, CabbageIdentifierIds::type, "image");
    setProperty(widgetData, CabbageIdentifierIds::file, "");
    setProperty(widgetData, CabbageIdentifierIds::name, "image");
    setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
    setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
    setProperty(widgetData, CabbageIdentifierIds::visible, 1);
}
void CabbageWidgetData::setComboBoxProperties(ValueTree widgetData, int ID)
{
    setProperty(widgetData, "basetype", "interactive");
    var array;
    array.append("Item 1");
    array.append("Item 2");
    array.append("Item 3");
    array.append("Item 4");
    setProperty(widgetData, CabbageIdentifierIds::top, 10);
    setProperty(widgetData, CabbageIdentifierIds::left, 10);
    setProperty(widgetData, CabbageIdentifierIds::width, 80);
    setProperty(widgetData, CabbageIdentifierIds::height, 20);
    var channels;
    channels.append("combochan");
    setProperty(widgetData, CabbageIdentifierIds::channel, channels);
    setProperty(widgetData, CabbageIdentifierIds::channeltype, "number");
    setProperty(widgetData, CabbageIdentifierIds::text, array);
    setProperty(widgetData, CabbageIdentifierIds::value, 1);
    setProperty(widgetData, CabbageIdentifierIds::currenttext, "");
    setProperty(widgetData, CabbageIdentifierIds::caption, "");
    setProperty(widgetData, CabbageIdentifierIds::colour, Colours::black.toString());
    setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
    setProperty(widgetData, CabbageIdentifierIds::menucolour, Colours::whitesmoke.toString());
    setProperty(widgetData, CabbageIdentifierIds::type, "combobox");
    setProperty(widgetData, CabbageIdentifierIds::comborange, 4);
    setProperty(widgetData, CabbageIdentifierIds::file, "");
    var populate;
    populate.append("");
    populate.append("");
    setProperty(widgetData, CabbageIdentifierIds::populate, populate);
    setProperty(widgetData, CabbageIdentifierIds::name, "combobox");
    setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
    setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
    setProperty(widgetData, CabbageIdentifierIds::visible, 1);
    setProperty(widgetData, CabbageIdentifierIds::workingdir, "");
}

void CabbageWidgetData::setNumberBoxProperties(ValueTree widgetData, int ID)
{
	setProperty(widgetData, "basetype", "interactive");
	setProperty(widgetData, CabbageIdentifierIds::top, 10);
	setProperty(widgetData, CabbageIdentifierIds::left, 10);
	setProperty(widgetData, CabbageIdentifierIds::width, 100);
	setProperty(widgetData, CabbageIdentifierIds::height, 22);
	var channels;
	channels.append("numberbox");
	setProperty(widgetData, CabbageIdentifierIds::channel, channels);
	setProperty(widgetData, CabbageIdentifierIds::min, 0);
	setProperty(widgetData, CabbageIdentifierIds::max, 100);
	setProperty(widgetData, CabbageIdentifierIds::value, 50);
	setProperty(widgetData, CabbageIdentifierIds::sliderskew, 1);
	setProperty(widgetData, CabbageIdentifierIds::sliderincr, .01);
	setProperty(widgetData, CabbageIdentifierIds::text, "");
	setProperty(widgetData, CabbageIdentifierIds::value, 0);
	setProperty(widgetData, CabbageIdentifierIds::caption, "");
	setProperty(widgetData, CabbageIdentifierIds::type, "numberbox");
	setProperty(widgetData, CabbageIdentifierIds::colour, CabbageUtilities::getDarkerBackgroundSkin().toString());
	setProperty(widgetData, CabbageIdentifierIds::fontcolour, Colours::whitesmoke.toString());
	setProperty(widgetData, CabbageIdentifierIds::textcolour, CabbageUtilities::getComponentFontColour().toString());
	setProperty(widgetData, CabbageIdentifierIds::name, "numberbox");
	setProperty(widgetData, CabbageIdentifierIds::align, "above");
	setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
	setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
	setProperty(widgetData, CabbageIdentifierIds::visible, 1);
	setProperty(widgetData, CabbageIdentifierIds::velocity, 80);	
}
void CabbageWidgetData::setCheckBoxProperties(ValueTree widgetData, int ID)
{
    setProperty(widgetData, "basetype", "interactive");
    setProperty(widgetData, CabbageIdentifierIds::top, 10);
    setProperty(widgetData, CabbageIdentifierIds::left, 10);
    setProperty(widgetData, CabbageIdentifierIds::width, 100);
    setProperty(widgetData, CabbageIdentifierIds::height, 30);
    var channels;
    channels.append("checkchan");
    setProperty(widgetData, CabbageIdentifierIds::channel, channels);
    setProperty(widgetData, CabbageIdentifierIds::text, "");
    setProperty(widgetData, CabbageIdentifierIds::value, 0);
    setProperty(widgetData, CabbageIdentifierIds::caption, "");
    setProperty(widgetData, CabbageIdentifierIds::shape, "square");
    setProperty(widgetData, CabbageIdentifierIds::corners, 5);
    setProperty(widgetData, CabbageIdentifierIds::type, "checkbox");
    setProperty(widgetData, CabbageIdentifierIds::oncolour, Colours::lime.toString());
    setProperty(widgetData, CabbageIdentifierIds::colour, Colours::black.toString());
    setProperty(widgetData, CabbageIdentifierIds::onfontcolour, CabbageUtilities::getComponentFontColour().toString());
    setProperty(widgetData, CabbageIdentifierIds::fontcolour, CabbageUtilities::getComponentFontColour().toString());
    setProperty(widgetData, CabbageIdentifierIds::name, "checkbox");
    setProperty(widgetData, CabbageIdentifierIds::name, getProperty(widgetData, "name").toString()+String(ID));
    setProperty(widgetData, CabbageIdentifierIds::identchannel, "");
    setProperty(widgetData, CabbageIdentifierIds::radiogroup, 0);
    setProperty(widgetData, CabbageIdentifierIds::visible, 1);
    setProperty(widgetData, CabbageIdentifierIds::imgbuttonon, "");
    setProperty(widgetData, CabbageIdentifierIds::imgbuttonoff, "");
}

#endif  // CABBAGEWIDGETDATAINITMETHODS_H_INCLUDED