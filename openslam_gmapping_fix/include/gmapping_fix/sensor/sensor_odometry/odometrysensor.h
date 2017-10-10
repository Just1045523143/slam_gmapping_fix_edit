#ifndef ODOMETRYSENSOR_H
#define ODOMETRYSENSOR_H

#include <string>
#include <gmapping_fix/sensor/sensor_base/sensor.h>

namespace GMapping_Fix{

class OdometrySensor: public Sensor{
	public:
		OdometrySensor(const std::string& name, bool ideal=false);
		inline bool isIdeal() const { return m_ideal; }
//	protected:
		bool m_ideal;	
};

};

#endif

