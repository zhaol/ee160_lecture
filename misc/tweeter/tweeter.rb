!# /usr/bin/env ruby

require 'twitter'

OpenSSL::SSL::VERIFY_PEER = OpenSSL::SSL::VERIFY_NONE

consumer_key = "lEtW9b7LrtvZLB3K05ybxQ"
consumer_secret = "VwqMXOMIl3YEp2dCGtIEz9BI9u1GQe3bwf2xQg"
access_token = "2183321322-Wy7CMuH4AkmU5aiMbedmuSpgtVwXDsDAZBFeB7t"
access_token_secret = "xEnpDnISuXCVY1pB6BrfOLHvLWRcj6QgMmVcqfFfYXicV"

client = Twitter::REST::Client.new do |config|
  config.consumer_key = consumer_key
  config.consumer_secret = consumer_secret
  config.access_token = access_token
  config.access_token_secret = access_token_secret
end

string = ARGV.join(" ")
client.update(string)