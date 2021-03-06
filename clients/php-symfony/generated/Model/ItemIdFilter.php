<?php
/**
 * ItemIdFilter
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the ItemIdFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ItemIdFilter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupCurrencyCriteria
     * @SerializedName("ITEM_ID")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupCurrencyCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupCurrencyCriteria")
     */
    protected $iTEMID;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->iTEMID = isset($data['iTEMID']) ? $data['iTEMID'] : null;
    }

    /**
     * Gets iTEMID.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupCurrencyCriteria
     */
    public function getITEMID(): CatalogsProductGroupCurrencyCriteria
    {
        return $this->iTEMID;
    }

    /**
     * Sets iTEMID.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupCurrencyCriteria $iTEMID
     *
     * @return $this
     */
    public function setITEMID(CatalogsProductGroupCurrencyCriteria $iTEMID)
    {
        $this->iTEMID = $iTEMID;

        return $this;
    }
}


