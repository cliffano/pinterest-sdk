/*
 * CatalogsRetailBatchRequest.h
 *
 * A request object that can have multiple operations on a single retail batch
 */

#ifndef _CatalogsRetailBatchRequest_H_
#define _CatalogsRetailBatchRequest_H_


#include <string>
#include "CatalogsRetailBatchRequest_items_inner.h"
#include "CatalogsType.h"
#include "Country.h"
#include "Language.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A request object that can have multiple operations on a single retail batch
 *
 *  \ingroup Models
 *
 */

class CatalogsRetailBatchRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogsRetailBatchRequest();
	CatalogsRetailBatchRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogsRetailBatchRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	CatalogsType getCatalogType();

	/*! \brief Set 
	 */
	void setCatalogType(CatalogsType  catalog_type);
	/*! \brief Get 
	 */
	Country getCountry();

	/*! \brief Set 
	 */
	void setCountry(Country  country);
	/*! \brief Get 
	 */
	Language getLanguage();

	/*! \brief Set 
	 */
	void setLanguage(Language  language);
	/*! \brief Get Array with catalogs item operations
	 */
	std::list<CatalogsRetailBatchRequest_items_inner> getItems();

	/*! \brief Set Array with catalogs item operations
	 */
	void setItems(std::list <CatalogsRetailBatchRequest_items_inner> items);

private:
	CatalogsType catalog_type;
	Country country;
	Language language;
	std::list <CatalogsRetailBatchRequest_items_inner>items;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogsRetailBatchRequest_H_ */