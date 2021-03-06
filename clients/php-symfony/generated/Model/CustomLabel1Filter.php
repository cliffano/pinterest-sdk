<?php
/**
 * CustomLabel1Filter
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
 * Class representing the CustomLabel1Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CustomLabel1Filter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("CUSTOM_LABEL_1")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $cUSTOMLABEL1;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cUSTOMLABEL1 = isset($data['cUSTOMLABEL1']) ? $data['cUSTOMLABEL1'] : null;
    }

    /**
     * Gets cUSTOMLABEL1.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getCUSTOMLABEL1(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->cUSTOMLABEL1;
    }

    /**
     * Sets cUSTOMLABEL1.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL1
     *
     * @return $this
     */
    public function setCUSTOMLABEL1(CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL1)
    {
        $this->cUSTOMLABEL1 = $cUSTOMLABEL1;

        return $this;
    }
}


