#!/bin/bash

templatefolder="GitCourseReps/ECEN303-Fall2015/Miscellaneous/Templates/"
file="1challenge.py"

# Internal Field Separator
IFS=:

curdir=$(pwd)
for dir in ~/GitCourseReps/ECEN303-Fall2015/Students/*
do
  if ! [[ -e "${dir}" ]]; then
    echo "${dir} does not exist"
    printf "\n"
  elif ! [[ -d "${dir}" ]]; then
    echo "${dir} is not a directgory"
    printf "\n"
  else
    [[ -d "${dir}" ]] && cd "${dir}" && if ! [[ -f ${file} ]];
      then
        pwd
        cp ~/"${templatefolder}${file}" .
        git add "${file}"
        printf "\n"
      fi
  fi
done
cd ${curdir}

unset IFS

