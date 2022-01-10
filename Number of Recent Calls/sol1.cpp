class RecentCounter {
    private:
        queue<int> m_queue_ping; // queue to store pings.
    public:

        RecentCounter() {
        }

        int ping(int t) 
        {
            // Add new ping to end of queue.
            m_queue_ping.push(t);   
            
            // Remove all pings older than 3000 ms
            int low_limit = t - 3000;
            while (m_queue_ping.front() < low_limit)
            {
                m_queue_ping.pop();
            }
            
            // Queue now contains all pings in last 3000 ms
            return m_queue_ping.size();
        }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
