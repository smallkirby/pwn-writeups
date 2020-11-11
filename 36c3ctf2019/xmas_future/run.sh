#!/bin/bash
set -euo pipefail
php -S 127.0.0.1:1337 # lol, CORS doesn't like file:///
