/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ItemAttributes.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ItemAttributes::ItemAttributes(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string ItemAttributes::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void ItemAttributes::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree ItemAttributes::toPropertyTree()
{
    return toPropertyTree_internal();
}

void ItemAttributes::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string ItemAttributes::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ItemAttributes::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ItemAttributes::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("ad_link", m_Ad_link);
	// generate tree for Additional_image_link
	if (!m_Additional_image_link.empty()) {
		for (const auto &childEntry : m_Additional_image_link) {
            ptree Additional_image_link_node;
            Additional_image_link_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Additional_image_link_node));
		}
		pt.add_child("additional_image_link", tmp_node);
		tmp_node.clear();
	}
	pt.put("adult", m_Adult);
	pt.put("age_group", m_Age_group);
	pt.put("availability", m_Availability);
	pt.put("average_review_rating", m_Average_review_rating);
	pt.put("brand", m_Brand);
	pt.put("color", m_Color);
	pt.put("condition", m_Condition);
	pt.put("custom_label_0", m_Custom_label_0);
	pt.put("custom_label_1", m_Custom_label_1);
	pt.put("custom_label_2", m_Custom_label_2);
	pt.put("custom_label_3", m_Custom_label_3);
	pt.put("custom_label_4", m_Custom_label_4);
	pt.put("description", m_Description);
	pt.put("free_shipping_label", m_Free_shipping_label);
	pt.put("free_shipping_limit", m_Free_shipping_limit);
	pt.put("gender", m_Gender);
	pt.put("google_product_category", m_Google_product_category);
	pt.put("gtin", m_Gtin);
	pt.put("id", m_Id);
	// generate tree for Image_link
	if (!m_Image_link.empty()) {
		for (const auto &childEntry : m_Image_link) {
            ptree Image_link_node;
            Image_link_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Image_link_node));
		}
		pt.add_child("image_link", tmp_node);
		tmp_node.clear();
	}
	pt.put("item_group_id", m_Item_group_id);
	pt.put("last_updated_time", m_Last_updated_time);
	pt.put("link", m_Link);
	pt.put("material", m_Material);
	pt.put("min_ad_price", m_Min_ad_price);
	pt.put("mobile_link", m_Mobile_link);
	pt.put("mpn", m_Mpn);
	pt.put("number_of_ratings", m_Number_of_ratings);
	pt.put("number_of_reviews", m_Number_of_reviews);
	pt.put("pattern", m_Pattern);
	pt.put("price", m_Price);
	pt.put("product_type", m_Product_type);
	pt.put("sale_price", m_Sale_price);
	pt.put("shipping", m_Shipping);
	pt.put("shipping_height", m_Shipping_height);
	pt.put("shipping_weight", m_Shipping_weight);
	pt.put("shipping_width", m_Shipping_width);
	pt.put("size", m_Size);
	pt.put("size_system", m_Size_system);
	pt.put("size_type", m_Size_type);
	pt.put("tax", m_Tax);
	pt.put("title", m_Title);
	return pt;
}

void ItemAttributes::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Ad_link = pt.get("ad_link", "");
	// push all items of Additional_image_link into member vector
	if (pt.get_child_optional("additional_image_link")) {
		for (const auto &childTree : pt.get_child("additional_image_link")) {
            std::string val =
                childTree.second.data();
            m_Additional_image_link.emplace_back(std::move(val));
		}
	}
	m_Adult = pt.get("adult", false);
	m_Age_group = pt.get("age_group", "");
	m_Availability = pt.get("availability", "");
	m_Average_review_rating = pt.get("average_review_rating", 0.0);
	m_Brand = pt.get("brand", "");
	m_Color = pt.get("color", "");
	m_Condition = pt.get("condition", "");
	m_Custom_label_0 = pt.get("custom_label_0", "");
	m_Custom_label_1 = pt.get("custom_label_1", "");
	m_Custom_label_2 = pt.get("custom_label_2", "");
	m_Custom_label_3 = pt.get("custom_label_3", "");
	m_Custom_label_4 = pt.get("custom_label_4", "");
	m_Description = pt.get("description", "");
	m_Free_shipping_label = pt.get("free_shipping_label", false);
	m_Free_shipping_limit = pt.get("free_shipping_limit", "");
	m_Gender = pt.get("gender", "");
	m_Google_product_category = pt.get("google_product_category", "");
	m_Gtin = pt.get("gtin", 0);
	m_Id = pt.get("id", "");
	// push all items of Image_link into member vector
	if (pt.get_child_optional("image_link")) {
		for (const auto &childTree : pt.get_child("image_link")) {
            std::string val =
                childTree.second.data();
            m_Image_link.emplace_back(std::move(val));
		}
	}
	m_Item_group_id = pt.get("item_group_id", "");
	m_Last_updated_time = pt.get("last_updated_time", 0L);
	m_Link = pt.get("link", "");
	m_Material = pt.get("material", "");
	m_Min_ad_price = pt.get("min_ad_price", "");
	m_Mobile_link = pt.get("mobile_link", "");
	m_Mpn = pt.get("mpn", "");
	m_Number_of_ratings = pt.get("number_of_ratings", 0);
	m_Number_of_reviews = pt.get("number_of_reviews", 0);
	m_Pattern = pt.get("pattern", "");
	m_Price = pt.get("price", "");
	m_Product_type = pt.get("product_type", "");
	m_Sale_price = pt.get("sale_price", "");
	m_Shipping = pt.get("shipping", "");
	m_Shipping_height = pt.get("shipping_height", "");
	m_Shipping_weight = pt.get("shipping_weight", "");
	m_Shipping_width = pt.get("shipping_width", "");
	m_Size = pt.get("size", "");
	m_Size_system = pt.get("size_system", "");
	m_Size_type = pt.get("size_type", "");
	m_Tax = pt.get("tax", "");
	m_Title = pt.get("title", "");
}

std::string ItemAttributes::getAdLink() const
{
    return m_Ad_link;
}

void ItemAttributes::setAdLink(std::string value)
{
	m_Ad_link = value;
}
std::vector<std::string> ItemAttributes::getAdditionalImageLink() const
{
    return m_Additional_image_link;
}

void ItemAttributes::setAdditionalImageLink(std::vector<std::string> value)
{
	m_Additional_image_link = value;
}
bool ItemAttributes::isAdult() const
{
    return m_Adult;
}

void ItemAttributes::setAdult(bool value)
{
	m_Adult = value;
}
std::string ItemAttributes::getAgeGroup() const
{
    return m_Age_group;
}

void ItemAttributes::setAgeGroup(std::string value)
{
	m_Age_group = value;
}
std::string ItemAttributes::getAvailability() const
{
    return m_Availability;
}

void ItemAttributes::setAvailability(std::string value)
{
	m_Availability = value;
}
double ItemAttributes::getAverageReviewRating() const
{
    return m_Average_review_rating;
}

void ItemAttributes::setAverageReviewRating(double value)
{
	m_Average_review_rating = value;
}
std::string ItemAttributes::getBrand() const
{
    return m_Brand;
}

void ItemAttributes::setBrand(std::string value)
{
	m_Brand = value;
}
std::string ItemAttributes::getColor() const
{
    return m_Color;
}

void ItemAttributes::setColor(std::string value)
{
	m_Color = value;
}
std::string ItemAttributes::getCondition() const
{
    return m_Condition;
}

void ItemAttributes::setCondition(std::string value)
{
	m_Condition = value;
}
std::string ItemAttributes::getCustomLabel0() const
{
    return m_Custom_label_0;
}

void ItemAttributes::setCustomLabel0(std::string value)
{
	m_Custom_label_0 = value;
}
std::string ItemAttributes::getCustomLabel1() const
{
    return m_Custom_label_1;
}

void ItemAttributes::setCustomLabel1(std::string value)
{
	m_Custom_label_1 = value;
}
std::string ItemAttributes::getCustomLabel2() const
{
    return m_Custom_label_2;
}

void ItemAttributes::setCustomLabel2(std::string value)
{
	m_Custom_label_2 = value;
}
std::string ItemAttributes::getCustomLabel3() const
{
    return m_Custom_label_3;
}

void ItemAttributes::setCustomLabel3(std::string value)
{
	m_Custom_label_3 = value;
}
std::string ItemAttributes::getCustomLabel4() const
{
    return m_Custom_label_4;
}

void ItemAttributes::setCustomLabel4(std::string value)
{
	m_Custom_label_4 = value;
}
std::string ItemAttributes::getDescription() const
{
    return m_Description;
}

void ItemAttributes::setDescription(std::string value)
{
	m_Description = value;
}
bool ItemAttributes::isFreeShippingLabel() const
{
    return m_Free_shipping_label;
}

void ItemAttributes::setFreeShippingLabel(bool value)
{
	m_Free_shipping_label = value;
}
std::string ItemAttributes::getFreeShippingLimit() const
{
    return m_Free_shipping_limit;
}

void ItemAttributes::setFreeShippingLimit(std::string value)
{
	m_Free_shipping_limit = value;
}
std::string ItemAttributes::getGender() const
{
    return m_Gender;
}

void ItemAttributes::setGender(std::string value)
{
	m_Gender = value;
}
std::string ItemAttributes::getGoogleProductCategory() const
{
    return m_Google_product_category;
}

void ItemAttributes::setGoogleProductCategory(std::string value)
{
	m_Google_product_category = value;
}
int32_t ItemAttributes::getGtin() const
{
    return m_Gtin;
}

void ItemAttributes::setGtin(int32_t value)
{
	m_Gtin = value;
}
std::string ItemAttributes::getId() const
{
    return m_Id;
}

void ItemAttributes::setId(std::string value)
{
	m_Id = value;
}
std::vector<std::string> ItemAttributes::getImageLink() const
{
    return m_Image_link;
}

void ItemAttributes::setImageLink(std::vector<std::string> value)
{
	m_Image_link = value;
}
std::string ItemAttributes::getItemGroupId() const
{
    return m_Item_group_id;
}

void ItemAttributes::setItemGroupId(std::string value)
{
	m_Item_group_id = value;
}
int64_t ItemAttributes::getLastUpdatedTime() const
{
    return m_Last_updated_time;
}

void ItemAttributes::setLastUpdatedTime(int64_t value)
{
	m_Last_updated_time = value;
}
std::string ItemAttributes::getLink() const
{
    return m_Link;
}

void ItemAttributes::setLink(std::string value)
{
	m_Link = value;
}
std::string ItemAttributes::getMaterial() const
{
    return m_Material;
}

void ItemAttributes::setMaterial(std::string value)
{
	m_Material = value;
}
std::string ItemAttributes::getMinAdPrice() const
{
    return m_Min_ad_price;
}

void ItemAttributes::setMinAdPrice(std::string value)
{
	m_Min_ad_price = value;
}
std::string ItemAttributes::getMobileLink() const
{
    return m_Mobile_link;
}

void ItemAttributes::setMobileLink(std::string value)
{
	m_Mobile_link = value;
}
std::string ItemAttributes::getMpn() const
{
    return m_Mpn;
}

void ItemAttributes::setMpn(std::string value)
{
	m_Mpn = value;
}
int32_t ItemAttributes::getNumberOfRatings() const
{
    return m_Number_of_ratings;
}

void ItemAttributes::setNumberOfRatings(int32_t value)
{
	m_Number_of_ratings = value;
}
int32_t ItemAttributes::getNumberOfReviews() const
{
    return m_Number_of_reviews;
}

void ItemAttributes::setNumberOfReviews(int32_t value)
{
	m_Number_of_reviews = value;
}
std::string ItemAttributes::getPattern() const
{
    return m_Pattern;
}

void ItemAttributes::setPattern(std::string value)
{
	m_Pattern = value;
}
std::string ItemAttributes::getPrice() const
{
    return m_Price;
}

void ItemAttributes::setPrice(std::string value)
{
	m_Price = value;
}
std::string ItemAttributes::getProductType() const
{
    return m_Product_type;
}

void ItemAttributes::setProductType(std::string value)
{
	m_Product_type = value;
}
std::string ItemAttributes::getSalePrice() const
{
    return m_Sale_price;
}

void ItemAttributes::setSalePrice(std::string value)
{
	m_Sale_price = value;
}
std::string ItemAttributes::getShipping() const
{
    return m_Shipping;
}

void ItemAttributes::setShipping(std::string value)
{
	m_Shipping = value;
}
std::string ItemAttributes::getShippingHeight() const
{
    return m_Shipping_height;
}

void ItemAttributes::setShippingHeight(std::string value)
{
	m_Shipping_height = value;
}
std::string ItemAttributes::getShippingWeight() const
{
    return m_Shipping_weight;
}

void ItemAttributes::setShippingWeight(std::string value)
{
	m_Shipping_weight = value;
}
std::string ItemAttributes::getShippingWidth() const
{
    return m_Shipping_width;
}

void ItemAttributes::setShippingWidth(std::string value)
{
	m_Shipping_width = value;
}
std::string ItemAttributes::getSize() const
{
    return m_Size;
}

void ItemAttributes::setSize(std::string value)
{
	m_Size = value;
}
std::string ItemAttributes::getSizeSystem() const
{
    return m_Size_system;
}

void ItemAttributes::setSizeSystem(std::string value)
{
	m_Size_system = value;
}
std::string ItemAttributes::getSizeType() const
{
    return m_Size_type;
}

void ItemAttributes::setSizeType(std::string value)
{
	m_Size_type = value;
}
std::string ItemAttributes::getTax() const
{
    return m_Tax;
}

void ItemAttributes::setTax(std::string value)
{
	m_Tax = value;
}
std::string ItemAttributes::getTitle() const
{
    return m_Title;
}

void ItemAttributes::setTitle(std::string value)
{
	m_Title = value;
}

std::vector<ItemAttributes> createItemAttributesVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<ItemAttributes>();
    for (const auto& child: pt) {
        vec.emplace_back(ItemAttributes(child.second));
    }

    return vec;
}

}
}
}
}

