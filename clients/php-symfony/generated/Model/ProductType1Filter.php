<?php
/**
 * ProductType1Filter
 *
 * PHP version 8.1.1
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
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the ProductType1Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class ProductType1Filter 
{
        /**
     * @var CatalogsProductGroupMultipleStringListCriteria|null
     * @SerializedName("PRODUCT_TYPE_1")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     */
    protected ?CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE1 = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->pRODUCTTYPE1 = array_key_exists('pRODUCTTYPE1', $data) ? $data['pRODUCTTYPE1'] : $this->pRODUCTTYPE1;
        }
    }

    /**
     * Gets pRODUCTTYPE1.
     *
     * @return CatalogsProductGroupMultipleStringListCriteria|null
     */
    public function getPRODUCTTYPE1(): ?CatalogsProductGroupMultipleStringListCriteria
    {
        return $this->pRODUCTTYPE1;
    }



    /**
     * Sets pRODUCTTYPE1.
     *
     * @param CatalogsProductGroupMultipleStringListCriteria|null $pRODUCTTYPE1
     *
     * @return $this
     */
    public function setPRODUCTTYPE1(?CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE1): self
    {
        $this->pRODUCTTYPE1 = $pRODUCTTYPE1;

        return $this;
    }
}


