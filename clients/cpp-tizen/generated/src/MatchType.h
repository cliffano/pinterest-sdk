/*
 * MatchType.h
 *
 * Keyword match type
 */

#ifndef _MatchType_H_
#define _MatchType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Keyword match type
 *
 *  \ingroup Models
 *
 */

class MatchType : public Object {
public:
	/*! \brief Constructor.
	 */
	MatchType();
	MatchType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MatchType();

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

#endif /* _MatchType_H_ */
