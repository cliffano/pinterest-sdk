<?php
/**
 * CatalogsItemValidationErrors
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
 * Class representing the CatalogsItemValidationErrors model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsItemValidationErrors 
{
        /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("ADULT_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $aDULTINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("ADWORDS_FORMAT_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $aDWORDSFORMATINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("AVAILABILITY_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $aVAILABILITYINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("BLOCKLISTED_IMAGE_SIGNATURE")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $bLOCKLISTEDIMAGESIGNATURE = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("DESCRIPTION_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $dESCRIPTIONMISSING = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("DUPLICATE_PRODUCTS")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $dUPLICATEPRODUCTS = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("IMAGE_LINK_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iMAGELINKINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("IMAGE_LINK_LENGTH_TOO_LONG")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iMAGELINKLENGTHTOOLONG = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("IMAGE_LINK_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iMAGELINKMISSING = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("INVALID_DOMAIN")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iNVALIDDOMAIN = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("ITEMID_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iTEMIDMISSING = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $iTEMMAINIMAGEDOWNLOADFAILURE = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("LINK_FORMAT_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $lINKFORMATINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("LINK_LENGTH_TOO_LONG")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $lINKLENGTHTOOLONG = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("LIST_PRICE_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $lISTPRICEINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $mAXITEMSPERITEMGROUPEXCEEDED = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PARSE_LINE_ERROR")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pARSELINEERROR = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PINJOIN_CONTENT_UNSAFE")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pINJOINCONTENTUNSAFE = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PRICE_CANNOT_BE_DETERMINED")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pRICECANNOTBEDETERMINED = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PRICE_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pRICEMISSING = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PRODUCT_LINK_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pRODUCTLINKMISSING = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("PRODUCT_PRICE_INVALID")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $pRODUCTPRICEINVALID = null;

    /**
     * @var CatalogsItemValidationDetails|null
     * @SerializedName("TITLE_MISSING")
     * @Assert\Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     * @Type("OpenAPI\Server\Model\CatalogsItemValidationDetails")
     */
    protected ?CatalogsItemValidationDetails $tITLEMISSING = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->aDULTINVALID = array_key_exists('aDULTINVALID', $data) ? $data['aDULTINVALID'] : $this->aDULTINVALID;
            $this->aDWORDSFORMATINVALID = array_key_exists('aDWORDSFORMATINVALID', $data) ? $data['aDWORDSFORMATINVALID'] : $this->aDWORDSFORMATINVALID;
            $this->aVAILABILITYINVALID = array_key_exists('aVAILABILITYINVALID', $data) ? $data['aVAILABILITYINVALID'] : $this->aVAILABILITYINVALID;
            $this->bLOCKLISTEDIMAGESIGNATURE = array_key_exists('bLOCKLISTEDIMAGESIGNATURE', $data) ? $data['bLOCKLISTEDIMAGESIGNATURE'] : $this->bLOCKLISTEDIMAGESIGNATURE;
            $this->dESCRIPTIONMISSING = array_key_exists('dESCRIPTIONMISSING', $data) ? $data['dESCRIPTIONMISSING'] : $this->dESCRIPTIONMISSING;
            $this->dUPLICATEPRODUCTS = array_key_exists('dUPLICATEPRODUCTS', $data) ? $data['dUPLICATEPRODUCTS'] : $this->dUPLICATEPRODUCTS;
            $this->iMAGELINKINVALID = array_key_exists('iMAGELINKINVALID', $data) ? $data['iMAGELINKINVALID'] : $this->iMAGELINKINVALID;
            $this->iMAGELINKLENGTHTOOLONG = array_key_exists('iMAGELINKLENGTHTOOLONG', $data) ? $data['iMAGELINKLENGTHTOOLONG'] : $this->iMAGELINKLENGTHTOOLONG;
            $this->iMAGELINKMISSING = array_key_exists('iMAGELINKMISSING', $data) ? $data['iMAGELINKMISSING'] : $this->iMAGELINKMISSING;
            $this->iNVALIDDOMAIN = array_key_exists('iNVALIDDOMAIN', $data) ? $data['iNVALIDDOMAIN'] : $this->iNVALIDDOMAIN;
            $this->iTEMIDMISSING = array_key_exists('iTEMIDMISSING', $data) ? $data['iTEMIDMISSING'] : $this->iTEMIDMISSING;
            $this->iTEMMAINIMAGEDOWNLOADFAILURE = array_key_exists('iTEMMAINIMAGEDOWNLOADFAILURE', $data) ? $data['iTEMMAINIMAGEDOWNLOADFAILURE'] : $this->iTEMMAINIMAGEDOWNLOADFAILURE;
            $this->lINKFORMATINVALID = array_key_exists('lINKFORMATINVALID', $data) ? $data['lINKFORMATINVALID'] : $this->lINKFORMATINVALID;
            $this->lINKLENGTHTOOLONG = array_key_exists('lINKLENGTHTOOLONG', $data) ? $data['lINKLENGTHTOOLONG'] : $this->lINKLENGTHTOOLONG;
            $this->lISTPRICEINVALID = array_key_exists('lISTPRICEINVALID', $data) ? $data['lISTPRICEINVALID'] : $this->lISTPRICEINVALID;
            $this->mAXITEMSPERITEMGROUPEXCEEDED = array_key_exists('mAXITEMSPERITEMGROUPEXCEEDED', $data) ? $data['mAXITEMSPERITEMGROUPEXCEEDED'] : $this->mAXITEMSPERITEMGROUPEXCEEDED;
            $this->pARSELINEERROR = array_key_exists('pARSELINEERROR', $data) ? $data['pARSELINEERROR'] : $this->pARSELINEERROR;
            $this->pINJOINCONTENTUNSAFE = array_key_exists('pINJOINCONTENTUNSAFE', $data) ? $data['pINJOINCONTENTUNSAFE'] : $this->pINJOINCONTENTUNSAFE;
            $this->pRICECANNOTBEDETERMINED = array_key_exists('pRICECANNOTBEDETERMINED', $data) ? $data['pRICECANNOTBEDETERMINED'] : $this->pRICECANNOTBEDETERMINED;
            $this->pRICEMISSING = array_key_exists('pRICEMISSING', $data) ? $data['pRICEMISSING'] : $this->pRICEMISSING;
            $this->pRODUCTLINKMISSING = array_key_exists('pRODUCTLINKMISSING', $data) ? $data['pRODUCTLINKMISSING'] : $this->pRODUCTLINKMISSING;
            $this->pRODUCTPRICEINVALID = array_key_exists('pRODUCTPRICEINVALID', $data) ? $data['pRODUCTPRICEINVALID'] : $this->pRODUCTPRICEINVALID;
            $this->tITLEMISSING = array_key_exists('tITLEMISSING', $data) ? $data['tITLEMISSING'] : $this->tITLEMISSING;
        }
    }

    /**
     * Gets aDULTINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getADULTINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->aDULTINVALID;
    }



    /**
     * Sets aDULTINVALID.
     *
     * @param CatalogsItemValidationDetails|null $aDULTINVALID
     *
     * @return $this
     */
    public function setADULTINVALID(?CatalogsItemValidationDetails $aDULTINVALID = null): self
    {
        $this->aDULTINVALID = $aDULTINVALID;

        return $this;
    }

    /**
     * Gets aDWORDSFORMATINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getADWORDSFORMATINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->aDWORDSFORMATINVALID;
    }



    /**
     * Sets aDWORDSFORMATINVALID.
     *
     * @param CatalogsItemValidationDetails|null $aDWORDSFORMATINVALID
     *
     * @return $this
     */
    public function setADWORDSFORMATINVALID(?CatalogsItemValidationDetails $aDWORDSFORMATINVALID = null): self
    {
        $this->aDWORDSFORMATINVALID = $aDWORDSFORMATINVALID;

        return $this;
    }

    /**
     * Gets aVAILABILITYINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getAVAILABILITYINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->aVAILABILITYINVALID;
    }



    /**
     * Sets aVAILABILITYINVALID.
     *
     * @param CatalogsItemValidationDetails|null $aVAILABILITYINVALID
     *
     * @return $this
     */
    public function setAVAILABILITYINVALID(?CatalogsItemValidationDetails $aVAILABILITYINVALID = null): self
    {
        $this->aVAILABILITYINVALID = $aVAILABILITYINVALID;

        return $this;
    }

    /**
     * Gets bLOCKLISTEDIMAGESIGNATURE.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getBLOCKLISTEDIMAGESIGNATURE(): ?CatalogsItemValidationDetails
    {
        return $this->bLOCKLISTEDIMAGESIGNATURE;
    }



    /**
     * Sets bLOCKLISTEDIMAGESIGNATURE.
     *
     * @param CatalogsItemValidationDetails|null $bLOCKLISTEDIMAGESIGNATURE
     *
     * @return $this
     */
    public function setBLOCKLISTEDIMAGESIGNATURE(?CatalogsItemValidationDetails $bLOCKLISTEDIMAGESIGNATURE = null): self
    {
        $this->bLOCKLISTEDIMAGESIGNATURE = $bLOCKLISTEDIMAGESIGNATURE;

        return $this;
    }

    /**
     * Gets dESCRIPTIONMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getDESCRIPTIONMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->dESCRIPTIONMISSING;
    }



    /**
     * Sets dESCRIPTIONMISSING.
     *
     * @param CatalogsItemValidationDetails|null $dESCRIPTIONMISSING
     *
     * @return $this
     */
    public function setDESCRIPTIONMISSING(?CatalogsItemValidationDetails $dESCRIPTIONMISSING = null): self
    {
        $this->dESCRIPTIONMISSING = $dESCRIPTIONMISSING;

        return $this;
    }

    /**
     * Gets dUPLICATEPRODUCTS.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getDUPLICATEPRODUCTS(): ?CatalogsItemValidationDetails
    {
        return $this->dUPLICATEPRODUCTS;
    }



    /**
     * Sets dUPLICATEPRODUCTS.
     *
     * @param CatalogsItemValidationDetails|null $dUPLICATEPRODUCTS
     *
     * @return $this
     */
    public function setDUPLICATEPRODUCTS(?CatalogsItemValidationDetails $dUPLICATEPRODUCTS = null): self
    {
        $this->dUPLICATEPRODUCTS = $dUPLICATEPRODUCTS;

        return $this;
    }

    /**
     * Gets iMAGELINKINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getIMAGELINKINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->iMAGELINKINVALID;
    }



    /**
     * Sets iMAGELINKINVALID.
     *
     * @param CatalogsItemValidationDetails|null $iMAGELINKINVALID
     *
     * @return $this
     */
    public function setIMAGELINKINVALID(?CatalogsItemValidationDetails $iMAGELINKINVALID = null): self
    {
        $this->iMAGELINKINVALID = $iMAGELINKINVALID;

        return $this;
    }

    /**
     * Gets iMAGELINKLENGTHTOOLONG.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getIMAGELINKLENGTHTOOLONG(): ?CatalogsItemValidationDetails
    {
        return $this->iMAGELINKLENGTHTOOLONG;
    }



    /**
     * Sets iMAGELINKLENGTHTOOLONG.
     *
     * @param CatalogsItemValidationDetails|null $iMAGELINKLENGTHTOOLONG
     *
     * @return $this
     */
    public function setIMAGELINKLENGTHTOOLONG(?CatalogsItemValidationDetails $iMAGELINKLENGTHTOOLONG = null): self
    {
        $this->iMAGELINKLENGTHTOOLONG = $iMAGELINKLENGTHTOOLONG;

        return $this;
    }

    /**
     * Gets iMAGELINKMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getIMAGELINKMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->iMAGELINKMISSING;
    }



    /**
     * Sets iMAGELINKMISSING.
     *
     * @param CatalogsItemValidationDetails|null $iMAGELINKMISSING
     *
     * @return $this
     */
    public function setIMAGELINKMISSING(?CatalogsItemValidationDetails $iMAGELINKMISSING = null): self
    {
        $this->iMAGELINKMISSING = $iMAGELINKMISSING;

        return $this;
    }

    /**
     * Gets iNVALIDDOMAIN.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getINVALIDDOMAIN(): ?CatalogsItemValidationDetails
    {
        return $this->iNVALIDDOMAIN;
    }



    /**
     * Sets iNVALIDDOMAIN.
     *
     * @param CatalogsItemValidationDetails|null $iNVALIDDOMAIN
     *
     * @return $this
     */
    public function setINVALIDDOMAIN(?CatalogsItemValidationDetails $iNVALIDDOMAIN = null): self
    {
        $this->iNVALIDDOMAIN = $iNVALIDDOMAIN;

        return $this;
    }

    /**
     * Gets iTEMIDMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getITEMIDMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->iTEMIDMISSING;
    }



    /**
     * Sets iTEMIDMISSING.
     *
     * @param CatalogsItemValidationDetails|null $iTEMIDMISSING
     *
     * @return $this
     */
    public function setITEMIDMISSING(?CatalogsItemValidationDetails $iTEMIDMISSING = null): self
    {
        $this->iTEMIDMISSING = $iTEMIDMISSING;

        return $this;
    }

    /**
     * Gets iTEMMAINIMAGEDOWNLOADFAILURE.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getITEMMAINIMAGEDOWNLOADFAILURE(): ?CatalogsItemValidationDetails
    {
        return $this->iTEMMAINIMAGEDOWNLOADFAILURE;
    }



    /**
     * Sets iTEMMAINIMAGEDOWNLOADFAILURE.
     *
     * @param CatalogsItemValidationDetails|null $iTEMMAINIMAGEDOWNLOADFAILURE
     *
     * @return $this
     */
    public function setITEMMAINIMAGEDOWNLOADFAILURE(?CatalogsItemValidationDetails $iTEMMAINIMAGEDOWNLOADFAILURE = null): self
    {
        $this->iTEMMAINIMAGEDOWNLOADFAILURE = $iTEMMAINIMAGEDOWNLOADFAILURE;

        return $this;
    }

    /**
     * Gets lINKFORMATINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getLINKFORMATINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->lINKFORMATINVALID;
    }



    /**
     * Sets lINKFORMATINVALID.
     *
     * @param CatalogsItemValidationDetails|null $lINKFORMATINVALID
     *
     * @return $this
     */
    public function setLINKFORMATINVALID(?CatalogsItemValidationDetails $lINKFORMATINVALID = null): self
    {
        $this->lINKFORMATINVALID = $lINKFORMATINVALID;

        return $this;
    }

    /**
     * Gets lINKLENGTHTOOLONG.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getLINKLENGTHTOOLONG(): ?CatalogsItemValidationDetails
    {
        return $this->lINKLENGTHTOOLONG;
    }



    /**
     * Sets lINKLENGTHTOOLONG.
     *
     * @param CatalogsItemValidationDetails|null $lINKLENGTHTOOLONG
     *
     * @return $this
     */
    public function setLINKLENGTHTOOLONG(?CatalogsItemValidationDetails $lINKLENGTHTOOLONG = null): self
    {
        $this->lINKLENGTHTOOLONG = $lINKLENGTHTOOLONG;

        return $this;
    }

    /**
     * Gets lISTPRICEINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getLISTPRICEINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->lISTPRICEINVALID;
    }



    /**
     * Sets lISTPRICEINVALID.
     *
     * @param CatalogsItemValidationDetails|null $lISTPRICEINVALID
     *
     * @return $this
     */
    public function setLISTPRICEINVALID(?CatalogsItemValidationDetails $lISTPRICEINVALID = null): self
    {
        $this->lISTPRICEINVALID = $lISTPRICEINVALID;

        return $this;
    }

    /**
     * Gets mAXITEMSPERITEMGROUPEXCEEDED.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getMAXITEMSPERITEMGROUPEXCEEDED(): ?CatalogsItemValidationDetails
    {
        return $this->mAXITEMSPERITEMGROUPEXCEEDED;
    }



    /**
     * Sets mAXITEMSPERITEMGROUPEXCEEDED.
     *
     * @param CatalogsItemValidationDetails|null $mAXITEMSPERITEMGROUPEXCEEDED
     *
     * @return $this
     */
    public function setMAXITEMSPERITEMGROUPEXCEEDED(?CatalogsItemValidationDetails $mAXITEMSPERITEMGROUPEXCEEDED = null): self
    {
        $this->mAXITEMSPERITEMGROUPEXCEEDED = $mAXITEMSPERITEMGROUPEXCEEDED;

        return $this;
    }

    /**
     * Gets pARSELINEERROR.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPARSELINEERROR(): ?CatalogsItemValidationDetails
    {
        return $this->pARSELINEERROR;
    }



    /**
     * Sets pARSELINEERROR.
     *
     * @param CatalogsItemValidationDetails|null $pARSELINEERROR
     *
     * @return $this
     */
    public function setPARSELINEERROR(?CatalogsItemValidationDetails $pARSELINEERROR = null): self
    {
        $this->pARSELINEERROR = $pARSELINEERROR;

        return $this;
    }

    /**
     * Gets pINJOINCONTENTUNSAFE.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPINJOINCONTENTUNSAFE(): ?CatalogsItemValidationDetails
    {
        return $this->pINJOINCONTENTUNSAFE;
    }



    /**
     * Sets pINJOINCONTENTUNSAFE.
     *
     * @param CatalogsItemValidationDetails|null $pINJOINCONTENTUNSAFE
     *
     * @return $this
     */
    public function setPINJOINCONTENTUNSAFE(?CatalogsItemValidationDetails $pINJOINCONTENTUNSAFE = null): self
    {
        $this->pINJOINCONTENTUNSAFE = $pINJOINCONTENTUNSAFE;

        return $this;
    }

    /**
     * Gets pRICECANNOTBEDETERMINED.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPRICECANNOTBEDETERMINED(): ?CatalogsItemValidationDetails
    {
        return $this->pRICECANNOTBEDETERMINED;
    }



    /**
     * Sets pRICECANNOTBEDETERMINED.
     *
     * @param CatalogsItemValidationDetails|null $pRICECANNOTBEDETERMINED
     *
     * @return $this
     */
    public function setPRICECANNOTBEDETERMINED(?CatalogsItemValidationDetails $pRICECANNOTBEDETERMINED = null): self
    {
        $this->pRICECANNOTBEDETERMINED = $pRICECANNOTBEDETERMINED;

        return $this;
    }

    /**
     * Gets pRICEMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPRICEMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->pRICEMISSING;
    }



    /**
     * Sets pRICEMISSING.
     *
     * @param CatalogsItemValidationDetails|null $pRICEMISSING
     *
     * @return $this
     */
    public function setPRICEMISSING(?CatalogsItemValidationDetails $pRICEMISSING = null): self
    {
        $this->pRICEMISSING = $pRICEMISSING;

        return $this;
    }

    /**
     * Gets pRODUCTLINKMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPRODUCTLINKMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->pRODUCTLINKMISSING;
    }



    /**
     * Sets pRODUCTLINKMISSING.
     *
     * @param CatalogsItemValidationDetails|null $pRODUCTLINKMISSING
     *
     * @return $this
     */
    public function setPRODUCTLINKMISSING(?CatalogsItemValidationDetails $pRODUCTLINKMISSING = null): self
    {
        $this->pRODUCTLINKMISSING = $pRODUCTLINKMISSING;

        return $this;
    }

    /**
     * Gets pRODUCTPRICEINVALID.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getPRODUCTPRICEINVALID(): ?CatalogsItemValidationDetails
    {
        return $this->pRODUCTPRICEINVALID;
    }



    /**
     * Sets pRODUCTPRICEINVALID.
     *
     * @param CatalogsItemValidationDetails|null $pRODUCTPRICEINVALID
     *
     * @return $this
     */
    public function setPRODUCTPRICEINVALID(?CatalogsItemValidationDetails $pRODUCTPRICEINVALID = null): self
    {
        $this->pRODUCTPRICEINVALID = $pRODUCTPRICEINVALID;

        return $this;
    }

    /**
     * Gets tITLEMISSING.
     *
     * @return CatalogsItemValidationDetails|null
     */
    public function getTITLEMISSING(): ?CatalogsItemValidationDetails
    {
        return $this->tITLEMISSING;
    }



    /**
     * Sets tITLEMISSING.
     *
     * @param CatalogsItemValidationDetails|null $tITLEMISSING
     *
     * @return $this
     */
    public function setTITLEMISSING(?CatalogsItemValidationDetails $tITLEMISSING = null): self
    {
        $this->tITLEMISSING = $tITLEMISSING;

        return $this;
    }
}


