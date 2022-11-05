#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x316940c1, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbc824bee, "ath9k_hw_set_txq_props" },
	{ 0x3a50d89a, "ieee80211_csa_finish" },
	{ 0xd237b1d0, "ath9k_hw_init" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb856e27c, "ath9k_cmn_get_channel" },
	{ 0x744802d, "ath9k_hw_deinit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xbc2d65c3, "device_release_driver" },
	{ 0x70e87154, "ath9k_hw_set_gpio" },
	{ 0xefe7d3b8, "ath9k_cmn_init_crypto" },
	{ 0x2ce37cb5, "ieee80211_queue_work" },
	{ 0x9476bcb8, "ath9k_cmn_process_rate" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xfd112389, "ath9k_hw_btcoex_enable" },
	{ 0x2b9cf077, "ath9k_hw_wait" },
	{ 0xc318f7, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x22839500, "ath9k_hw_stopdmarecv" },
	{ 0xec623a23, "ath_key_delete" },
	{ 0x523198f, "ath9k_cmn_update_txpow" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0xecdcad29, "ath9k_hw_gpio_get" },
	{ 0xc6aaa6cc, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7a6faa73, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x8b760fea, "ath9k_hw_setrxfilter" },
	{ 0x5755a95a, "ath9k_hw_get_txq_props" },
	{ 0x1a81850d, "ath9k_hw_releasetxqueue" },
	{ 0xf68dd2e4, "ath9k_hw_reset_tsf" },
	{ 0xb57b0749, "wiphy_rfkill_start_polling" },
	{ 0xea24b65e, "usb_get_urb" },
	{ 0x120ee385, "ath9k_cmn_reload_chainmask" },
	{ 0xd98ab0be, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf474cc2, "ath9k_cmn_init_channels_rates" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x6fdee19a, "ieee80211_tx_status" },
	{ 0x10c2f2cc, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6ce13964, "ath9k_hw_setopmode" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xeb5d0793, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c5fdbc1, "ath9k_hw_resettxqueue" },
	{ 0xce2d397a, "ath9k_hw_gettsf64" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x47c42538, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x341c49d3, "ath9k_hw_set_tsfadjust" },
	{ 0x641266f1, "ath9k_cmn_beacon_config_ap" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x81e516d6, "ath9k_hw_btcoex_disable" },
	{ 0x45f7ba2, "ath9k_hw_getrxfilter" },
	{ 0x1339ec9, "ath9k_hw_ani_monitor" },
	{ 0xc00552c0, "ath_is_mybeacon" },
	{ 0x65c5c813, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x612ec7d8, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4cdcf675, "ath9k_cmn_process_rssi" },
	{ 0x5a921311, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc613f602, "ath9k_hw_write_associd" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xc7548d6f, "ath_reg_notifier_apply" },
	{ 0xe6765bfa, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb0350546, "ath9k_hw_init_btcoex_hw" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x8ce330af, "ath9k_hw_beaconq_setup" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x3caaa16c, "ath9k_hw_name" },
	{ 0xeae21e6b, "ath9k_hw_init_global_settings" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xbda3b302, "ath9k_hw_settsf64" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x746473dc, "ath9k_hw_beaconinit" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0xeb75ebc, "ieee80211_get_buffered_bc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0xf240895d, "ath9k_hw_gpio_free" },
	{ 0x2228aab9, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xab3823d2, "ath9k_hw_setrxabort" },
	{ 0x539bf6a, "ath9k_cmn_beacon_config_sta" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65d71cbb, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc56700cb, "ath9k_cmn_rx_skb_postprocess" },
	{ 0xb49231, "ath9k_hw_phy_disable" },
	{ 0x662138fb, "__ieee80211_get_radio_led_name" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xee33bedc, "ath9k_hw_setpower" },
	{ 0x1fa21022, "__ieee80211_create_tpt_led_trigger" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x22a1b4c9, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x205cf4a8, "ath9k_hw_setmcastfilter" },
	{ 0xb2a7131f, "ieee80211_start_tx_ba_session" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xc2bb1ef3, "ath9k_hw_gpio_request_out" },
	{ 0x3ec99972, "ath9k_hw_startpcureceive" },
	{ 0x6887096b, "ath9k_hw_setuptxqueue" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xc2db1ebe, "ath9k_hw_reset" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7c744498, "ath9k_cmn_rx_accept" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x6ed24747, "ath9k_hw_btcoex_init_3wire" },
	{ 0xfa8bfd92, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x9fa970ca, "ath9k_hw_reset_calvalid" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211,rfkill");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "71C914C0E8EB9242E16CFCC");
