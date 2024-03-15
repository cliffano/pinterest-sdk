<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

class CampaignCreateResponseItem
{
    /**
     * @DTA\Data(field="data", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\CampaignCreateResponseData::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\CampaignCreateResponseData::class})
     */
    public ?\App\DTO\CampaignCreateResponseData $data = null;

    /**
     * @DTA\Data(field="exceptions", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection85::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection85::class})
     */
    public ?\App\DTO\Collection85 $exceptions = null;

}
