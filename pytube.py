from pytube import Playlist

# URL of the YouTube playlist
playlist_url = 'https://www.youtube.com/playlist?list=PLu0W_9lII9aiL0kysYlfSOUgY5rNlOhUd'

# Create a Playlist object
playlist = Playlist(playlist_url)

# Iterate over each video in the playlist
for video in playlist.videos:
    try:
        # Attempt to download the video
        print(f'Downloading {video.title}...')
        video.streams.filter(progressive=True, file_extension='mp4').first().download()
        print(f'{video.title} downloaded successfully!')
    except Exception as e:
        # Print error if download fails
        print(f'Error downloading {video.title}: {e}')
