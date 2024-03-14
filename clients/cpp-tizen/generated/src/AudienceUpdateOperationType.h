/*
 * AudienceUpdateOperationType.h
 *
 * Audience operation type (update or remove).
 */

#ifndef _AudienceUpdateOperationType_H_
#define _AudienceUpdateOperationType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Audience operation type (update or remove).
 *
 *  \ingroup Models
 *
 */

class AudienceUpdateOperationType : public Object {
public:
	/*! \brief Constructor.
	 */
	AudienceUpdateOperationType();
	AudienceUpdateOperationType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AudienceUpdateOperationType();

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

#endif /* _AudienceUpdateOperationType_H_ */
