<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

class CampaignCreateResponse
{
    /**
     * @DTA\Data(field="items", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\Collection86::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\Collection86::class})
     */
    public ?\App\DTO\Collection86 $items = null;

}
