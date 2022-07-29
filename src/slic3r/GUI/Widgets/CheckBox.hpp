#ifndef slic3r_GUI_CheckBox_hpp_
#define slic3r_GUI_CheckBox_hpp_

#include "../wxExtensions.hpp"

#include <wx/tglbtn.h>

class CheckBox : public wxBitmapToggleButton
{
public:
	CheckBox(wxWindow * parent = NULL);

public:
	void SetValue(bool value) override;

	void SetHalfChecked(bool value = true);

	void Rescale();

protected:
    virtual State GetNormalState() const wxOVERRIDE;

private:
	void update();

private:
    ScalableBitmap m_on;
    ScalableBitmap m_half;
    ScalableBitmap m_off;
    ScalableBitmap m_on_disabled;
    ScalableBitmap m_half_disabled;
    ScalableBitmap m_off_disabled;
    ScalableBitmap m_on_focused;
    ScalableBitmap m_half_focused;
    ScalableBitmap m_off_focused;
    bool m_half_checked = false;
};

#endif // !slic3r_GUI_CheckBox_hpp_
