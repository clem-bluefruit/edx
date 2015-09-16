#include "Lab4.h"

Lab4::Lab4(SwitchInterface &switch1, SwitchInterface &switch2, RGBLEDInterface &rgbLED)
 : m_switch1(switch1),
   m_switch2(switch2),
   m_rgbLED(rgbLED)
{
}

void Lab4::Run()
{
	bool switch1 = m_switch1.IsPressed();
	bool switch2 = m_switch2.IsPressed();

	if (!switch1 && !switch2)
	{
		m_rgbLED.SetColour(RGBLEDColours::Dark);
	}
	else if (switch1 && !switch2)
	{
		m_rgbLED.SetColour(RGBLEDColours::Red);
	}
	else if (!switch1 && switch2)
	{
		m_rgbLED.SetColour(RGBLEDColours::Green);
	}
	else
	{
		m_rgbLED.SetColour(RGBLEDColours::Blue);
	}
}