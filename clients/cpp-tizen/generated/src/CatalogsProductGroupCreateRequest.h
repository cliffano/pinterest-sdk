/*
 * CatalogsProductGroupCreateRequest.h
 *
 * Request object for creating a product group.
 */

#ifndef _CatalogsProductGroupCreateRequest_H_
#define _CatalogsProductGroupCreateRequest_H_


#include <string>
#include "CatalogsProductGroupFiltersRequest.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request object for creating a product group.
 *
 *  \ingroup Models
 *
 */

class CatalogsProductGroupCreateRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogsProductGroupCreateRequest();
	CatalogsProductGroupCreateRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogsProductGroupCreateRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get boolean indicator of whether the product group is being featured or not
	 */
	bool getIsFeatured();

	/*! \brief Set boolean indicator of whether the product group is being featured or not
	 */
	void setIsFeatured(bool  is_featured);
	/*! \brief Get 
	 */
	CatalogsProductGroupFiltersRequest getFilters();

	/*! \brief Set 
	 */
	void setFilters(CatalogsProductGroupFiltersRequest  filters);
	/*! \brief Get Catalog Feed id pertaining to the catalog product group.
	 */
	std::string getFeedId();

	/*! \brief Set Catalog Feed id pertaining to the catalog product group.
	 */
	void setFeedId(std::string  feed_id);

private:
	std::string name;
	std::string description;
	bool is_featured;
	CatalogsProductGroupFiltersRequest filters;
	std::string feed_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogsProductGroupCreateRequest_H_ */
