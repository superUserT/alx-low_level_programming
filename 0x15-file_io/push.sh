#!/bin/bash

echo "Enter commit text: "
read text

git add .
git commit -m "$text"
git push
