/*
 * MetricsResponse.h
 *
 * 
 */

#ifndef _MetricsResponse_H_
#define _MetricsResponse_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MetricsResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	MetricsResponse();
	MetricsResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MetricsResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<std::string> getData();

	/*! \brief Set 
	 */
	void setData(std::list <std::string> data);

private:
	std::list <std::string>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MetricsResponse_H_ */
