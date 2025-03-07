# Security Notes - GSM SIM Authentication

## Historical Weaknesses
- COMP128-1 leaked Kc from SRES structure.
- Weak RAND sources allow precomputation attacks.

## Modern Considerations
- Use strong entropy sources for RAND.
- Avoid storing Kc in plaintext.

## Attacker Models
| Model                  | Threat                       |
|------------------|----------------------|
| IMSI Catcher    | Spoofing base station |
| APDU Injection  | Man-in-the-middle APDU manipulation |

## Recommendations
- Prefer UMTS/LTE AKA (Authentication and Key Agreement) when possible.
- Secure channel (SCP03) for APDU exchange.

