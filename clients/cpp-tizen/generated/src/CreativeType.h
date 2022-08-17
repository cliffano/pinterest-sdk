/*
 * CreativeType.h
 *
 * Ad creative type enum
 */

#ifndef _CreativeType_H_
#define _CreativeType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ad creative type enum
 *
 *  \ingroup Models
 *
 */

class CreativeType : public Object {
public:
	/*! \brief Constructor.
	 */
	CreativeType();
	CreativeType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreativeType();

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

#endif /* _CreativeType_H_ */
