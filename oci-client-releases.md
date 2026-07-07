# OCI Client Releases

This repository publishes OCI-focused Lustre client updates as GitHub releases and tags. Users who depend on OCI-specific builds should monitor this repository for new release tags instead of assuming every upstream Lustre change has been packaged for OCI.

## How to monitor OCI releases

Use the repository's GitHub Releases page to see published OCI client releases:

https://github.com/oracle-samples/oci-lustre-client/releases

Each release is associated with a Git tag, such as:

```text
2.15.90_oci_v4
```

Watch the repository on GitHub and choose **Custom** notifications, then enable **Releases**. This will notify you when a new OCI-focused release is published.

## Checking from the command line

To list release tags from the main repository:

```bash
git ls-remote --tags https://github.com/oracle-samples/oci-lustre-client.git
```

To check out a specific OCI release tag:

```bash
git clone https://github.com/oracle-samples/oci-lustre-client.git
cd oci-lustre-client
git checkout 2.15.90_oci_v4
```

## Branches and tags

OCI-focused development may appear on release branches before a GitHub release is published. Release tags are the stable reference points for users who want a specific published OCI client release.

For the Lustre 2.15.90 OCI client line, monitor:

```text
oci/lustre-2.15.90-client
```

and the corresponding release tags:

```text
2.15.90_oci_v*
```
