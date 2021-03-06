
import os, sys

templatedir = "templates/"
tab         = "    "
tab2        = tab + tab
execdir     = os.path.dirname(os.path.abspath(sys.argv[0])) + "/"


def versionBID(feature, core = False, ext = False):

    if feature is None:
        return ""

    version = str(feature.major) + str(feature.minor)

    if core:
        return version + "core"
    elif ext:
        return version + "ext"

    return version


def template(outputfile):

    with open (execdir + templatedir + outputfile + ".in", "r") as file:
        return file.read()


class Status:

    targetdir = ""


def status(file):

    print("generating " + file.replace(Status.targetdir, ""))


# enum_binding_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBID(enum):

    return enum.name

# extension_binding_name_exceptions = [ ]

# ToDo: discuss - just use name for glbinding?
def extensionBID(extension):

    return extension.name    


def functionBID(function):

    return function.name




def alphabeticallyGroupedLists():

    # create a dictionary of lists by upper case letters
    # and a single "everythingelse" list

    keys = '0ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lists = dict()
    for key in keys:
        lists[key] = list()

    return lists


def alphabeticalGroupKey(identifier, prefix):

    # derives an key from an identifier with "GL_" prefix 

    index = identifier.find(prefix)
    if index < 0:
        return -1

    index += len(prefix)

    key = ((identifier[index:])[:1]).upper()
    if ord(key) not in range(65, 91):
        key = '0'

    return key
