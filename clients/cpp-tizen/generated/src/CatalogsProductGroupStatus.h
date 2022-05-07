/*
 * CatalogsProductGroupStatus.h
 *
 * 
 */

#ifndef _CatalogsProductGroupStatus_H_
#define _CatalogsProductGroupStatus_H_


#include <string>
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

class CatalogsProductGroupStatus : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogsProductGroupStatus();
	CatalogsProductGroupStatus(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogsProductGroupStatus();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogsProductGroupStatus_H_ */
