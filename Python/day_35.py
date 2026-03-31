#Extract email address

import re
email_log = """Email recieved June 2 from user1@email.com. Email recieved June 2 from user2@email.com. Email reject June 2 from invalud_email.com."""
print(re.findall(r"\w+@\w+\.\w+",email_log))
