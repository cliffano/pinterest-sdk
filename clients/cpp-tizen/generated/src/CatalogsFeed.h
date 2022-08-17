/*
 * CatalogsFeed.h
 *
 * Catalogs Feed object
 */

#ifndef _CatalogsFeed_H_
#define _CatalogsFeed_H_


#include <string>
#include "CatalogsDbItem.h"
#include "CatalogsFeedCredentials.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFormat.h"
#include "CatalogsStatus.h"
#include "Country.h"
#include "Feed_fields.h"
#include "NullableCurrency.h"
#include "ProductAvailabilityType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Catalogs Feed object
 *
 *  \ingroup Models
 *
 */

class CatalogsFeed : public Object {
public:
	/*! \brief Constructor.
	 */
	CatalogsFeed();
	CatalogsFeed(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CatalogsFeed();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCreatedAt();

	/*! \brief Set 
	 */
	void setCreatedAt(std::string  created_at);
	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getUpdatedAt();

	/*! \brief Set 
	 */
	void setUpdatedAt(std::string  updated_at);
	/*! \brief Get 
	 */
	Country getDefaultCountry();

	/*! \brief Set 
	 */
	void setDefaultCountry(Country  default_country);
	/*! \brief Get 
	 */
	ProductAvailabilityType getDefaultAvailability();

	/*! \brief Set 
	 */
	void setDefaultAvailability(ProductAvailabilityType  default_availability);
	/*! \brief Get 
	 */
	NullableCurrency getDefaultCurrency();

	/*! \brief Set 
	 */
	void setDefaultCurrency(NullableCurrency  default_currency);
	/*! \brief Get A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
	 */
	std::string getName();

	/*! \brief Set A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	CatalogsFormat getFormat();

	/*! \brief Set 
	 */
	void setFormat(CatalogsFormat  format);
	/*! \brief Get The locale used within a feed for product descriptions.
	 */
	std::string getDefaultLocale();

	/*! \brief Set The locale used within a feed for product descriptions.
	 */
	void setDefaultLocale(std::string  default_locale);
	/*! \brief Get 
	 */
	CatalogsFeedCredentials getCredentials();

	/*! \brief Set 
	 */
	void setCredentials(CatalogsFeedCredentials  credentials);
	/*! \brief Get The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	 */
	std::string getLocation();

	/*! \brief Set The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	 */
	void setLocation(std::string  location);
	/*! \brief Get 
	 */
	CatalogsFeedProcessingSchedule getPreferredProcessingSchedule();

	/*! \brief Set 
	 */
	void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule  preferred_processing_schedule);
	/*! \brief Get 
	 */
	CatalogsStatus getStatus();

	/*! \brief Set 
	 */
	void setStatus(CatalogsStatus  status);

private:
	std::string created_at;
	std::string id;
	std::string updated_at;
	Country default_country;
	ProductAvailabilityType default_availability;
	NullableCurrency default_currency;
	std::string name;
	CatalogsFormat format;
	std::string default_locale;
	CatalogsFeedCredentials credentials;
	std::string location;
	CatalogsFeedProcessingSchedule preferred_processing_schedule;
	CatalogsStatus status;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CatalogsFeed_H_ */
