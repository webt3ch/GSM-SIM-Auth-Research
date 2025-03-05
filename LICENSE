---

# **AUTH_PROTOCOL.md**

```md
# GSM SIM Authentication Protocol (Technical Overview)

## Phase 1: Initialization
- Power up SIM (C1 VCC)
- Apply Reset (C2 RESET)
- Terminal reads ATR (Answer to Reset)

## Phase 2: Challenge-Response
- Terminal sends APDU `A0 88 00 00 10` with RAND (16 bytes)
- SIM responds with SRES (4 bytes)

## Phase 3: Session Key Derivation
- SIM calculates Kc (8 bytes)
- Kc can be used to encrypt data link

---

## APDU Details

| Field | Value | Description |
|---|---|---|
| CLA | A0 | GSM class |
| INS | 88 | RUN GSM ALGORITHM |
| P1  | 00 | Reserved |
| P2  | 00 | Reserved |
| Lc  | 10 | RAND length (16 bytes) |
| Data| RAND | Random Challenge |
| Le  | 04 | Expected response length (4 bytes SRES) |
