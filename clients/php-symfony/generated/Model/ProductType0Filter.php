<?php
/**
 * ProductType0Filter
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
 * Class representing the ProductType0Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ProductType0Filter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria
     * @SerializedName("PRODUCT_TYPE_0")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     */
    protected $pRODUCTTYPE0;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->pRODUCTTYPE0 = isset($data['pRODUCTTYPE0']) ? $data['pRODUCTTYPE0'] : null;
    }

    /**
     * Gets pRODUCTTYPE0.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria
     */
    public function getPRODUCTTYPE0(): CatalogsProductGroupMultipleStringListCriteria
    {
        return $this->pRODUCTTYPE0;
    }

    /**
     * Sets pRODUCTTYPE0.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE0
     *
     * @return $this
     */
    public function setPRODUCTTYPE0(CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE0)
    {
        $this->pRODUCTTYPE0 = $pRODUCTTYPE0;

        return $this;
    }
}


